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

	string alfabeto = ("ABCDEFGHIJKLMNOPQRSTUVWXYZ");

	for(int i = 0; i < this->chave.length(); i++){
		chave[i] = toupper(chave[i]);
	}

	string texto = "";

	for(int i = 0; i < chave.length(); i++){
		if(chave[i] == (char)32){
			texto += " ";
		}
		else{
			int cont = 0;
			for(int k = 0; k < alfabeto.lenght(); k++)
		}
	}

	}

}