#include <bits/stdc++.h>
#include "ppm.hpp"

using namespace std;

Ppm::Ppm(){
	setArquivo("");
	setTipo("");
	setComentario("");
	setAltura(0); 
	setLargura(0);
	setValor(0);
}

Ppm::~Ppm(){
	setArquivo("");
	setTipo("");
	setComentario("");
	setAltura(0); 
	setLargura(0);
	setValor(0);
}

void Ppm::lerImagem(){

	string troca = "";
	ifstream infile(getArquivo().c_str());
	ofstream outfile("arquivo.pgm");
	stringstream alturaELargura;
	int a, b;

	//primeira linha
	getline(infile,troca);
	setTipo(troca);
	outfile << getTipo() << endl;
	
	//segunda linha
	getline(infile,troca);
	setComentario(troca);
	outfile << getComentario() << endl;

	//terceira linha 
	getline(infile,troca);
	alturaELargura.str(troca);
	alturaELargura >> a >> b;

	setAltura(a);
	setLargura(b);

	outfile << getAltura() << " " << getLargura() << endl;

	//quarta linha
	getline(infile, troca);

	setValor(atoi(troca.c_str()));
	outfile << getValor() << endl;

	int tamanho = getAltura() * getLargura() * 3;
	char * pixel = new char[tamanho];

	for(int i = 0; i < tamanho; ++i){
		infile.get(pixel[i]);
		outfile << pixel[i];
	}

	this->matriz = pixel;
}

void Ppm::dividirComentario(){
	stringstream separador;
	string comTag;

	separador.str(getComentario());

	separador >> comTag >> this->tamanho >> this->chave;
	for(unsigned int i = 0; i <comTag.length(); i++){
		comTag[i] = comTag[i + 1];
	} 

	this->pixelInicial = atoi(comTag.c_str());
}

void Ppm::descriptografia(){
	int somadorDePix;
	string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ", firstC, chave, msg;

	//setar a chave para maiusculo
	for (unsigned int i = 0; i < this->chave.length(); i++){
		this->chave[i] = this->chave[i] - 32;
	}

	//checar se tem letras repetidas na chave
	for (unsigned int i = 0; i < this->chave.length(); i++){
		unsigned int pos = i;
		for (unsigned int j = 0; j < this->chave.length(); j++){
			if (pos == j){
				continue;
			} else if(this->chave[i] == this->chave[j]){
				cout << "Existem letras repetidas na chave encontrada. Erro fatal." << endl;
				exit(EXIT_FAILURE); // termina a execucao do programa em caso de erro
			}

		}
	}

	//gerar o alfabeto com a chave
	string keyAlpha;

	//comecar o alfabeto novo
	for (unsigned int i = 0; i < this->chave.length(); i++){
		keyAlpha += this->chave[i];
	}

	//inserir o resto do alfabeto
	for (unsigned int i = 0; i < 26; i++){
		keyAlpha += (char) (i+65);
	} 

	//remover letras do alfabeto que ja estejam na chave e terminar o alfabeto
	for(unsigned int i = 0; i < keyAlpha.length(); i++){
		for (unsigned int j = 0; j < this->chave.length(); j++){
			if(keyAlpha[i] == this->chave[j]){
				for(unsigned int k = this->chave.length(); k < keyAlpha.length(); k++){
					if(keyAlpha[i] == keyAlpha[k]){
						keyAlpha[k] = 0;
					}
				}
			}
		}
	}

	
	cout << keyAlpha << endl;
	unsigned char * termo = new unsigned char[this->tamanho*3];
	int j = 0;
	//encontrar a mensagem
	cout << this->pixelInicial<<endl;
	for (int i = this->pixelInicial; i < (this->tamanho*3) + this->pixelInicial; i += 3){
		somadorDePix = (this->matriz[i] % 10) + (this->matriz[i+1] % 10) + (this->matriz[i+2] % 10);
		cout << (unsigned int)this->matriz[i]<<" "<<(unsigned int)this->matriz[i+1]<<" "<<(unsigned int)this->matriz[i+2]<<endl;
		//cout <<  <<" ";
		cout << this->matriz[i] << endl;
		if (somadorDePix == 0){
			termo[j] = ' ';			
		} 
		else{	
			termo[j] = keyAlpha[somadorDePix];
		}
		j++;
	}
	cout << termo << endl;	
}