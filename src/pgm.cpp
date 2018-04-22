#include <bits/stdc++.h>
#include "pgm.hpp"
#include <fstream>
#include <sstream>

using namespace std;

Pgm::Pgm(){
	setArquivo("");
	setTipo("");
	setComentario("");
	setAltura(0); 
	setLargura(0);
	setValor(0);
}

Pgm::~Pgm(){
	setArquivo("");
	setTipo("");
	setComentario("");
	setAltura(0); 
	setLargura(0);
	setValor(0);
}

void Pgm::dividirComentario(){

	stringstream separador;
	string comTag;

	separador.str(getComentario());

	separador >> comTag >> this->tamanho >> this->deslocamento;
	for(unsigned int i = 0; i <comTag.length(); i++){
		comTag[i] = comTag[i + 1];
	}

	this->pixelInicial = atoi(comTag.c_str());

}

void Pgm::descriptografia(){


	int t = 0;

	unsigned char * termo = new unsigned char[this->tamanho];

	for(int i = this->pixelInicial ; i < this->pixelInicial + this->tamanho ; i++ ){
		termo[t] = this->matriz[i];
		//cout<< "aaaaaa" << t <<endl;
		if((termo[t] < 65||(termo[t] >= 91 && termo[t] <= 96 )||( termo[t] > 122))){

		}
		else{
			termo[t] = (int)termo[t] - this->deslocamento;
		}

		if(termo[t-2] < 48 && termo[t-1]==' ' && t > 1){

		}
		else if(termo[t] >= 48 && termo[t] <= 96 && t > 1){
			termo[t] = termo[t] + 26;
		}

		t++;
 	}

	this->mensagem = (unsigned char *)termo;
}

void Pgm::printImagem(){
	cout<<getTipo()<<endl<<this->pixelInicial<<" "<<this->tamanho<<" "<<this->deslocamento<<endl<<getAltura()<<" "<<getLargura()<<endl<<getValor()<<endl<<this->mensagem<<endl;
}