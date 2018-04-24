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
	
	string cripto = this->chave;
	for(unsigned int i = 0; i < keyAlpha.length(); i++){
		bool repete = false;
		for (unsigned int j = 0; j < cripto.length(); j++){
			if(keyAlpha[i] == cripto[j]){
				repete = true;
				break;
			}
		}
		if (repete == false){
			cripto += keyAlpha[i];
		}
	}
	
	string termo = "";
	int j = 0, k = 0;
	//encontrar a mensagem
	for (int i = this->pixelInicial; i < (this->tamanho*3) + this->pixelInicial; i += 3){
		somadorDePix = (this->matriz[i] % 10) + (this->matriz[i+1] % 10) + (this->matriz[i+2] % 10) ;
		for (j = 0; j < 25; j++){
			if (somadorDePix == 0){
				termo += " ";
				break;
				
			}
			else if ((somadorDePix + 64) == cripto[j]){
				termo += 65 + j ;
				break;
			}
		}
	}

	this->mensagem = termo;
}