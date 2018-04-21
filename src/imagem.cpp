#include <bits/stdc++.h>
#include <fstream>
#include <iostream>

#include "imagem.hpp"

using namespace std;


Imagem::Imagem(){
	arquivo = "";
	tipo = "";
	comentario ="";
	altura = 0; 
	largura = 0;
	valor = 0;
}

Imagem::~Imagem(){
 
}

void Imagem::setArquivo(string arquivo){
	this->arquivo = arquivo;
}

string Imagem::getArquivo(){
	return arquivo;
}

void Imagem::lerImagem(){

	string troca = "";
	ifstream infile(this->arquivo.c_str());
	ofstream outfile("arquivo.pgm");
	stringstream alturaELargura;

	//primeira linha
	getline(infile,troca);
	this->tipo = troca;
	outfile << this->tipo << endl;
	
	//segunda linha
	getline(infile,troca);
	this->comentario = troca;
	outfile << this->comentario << endl;

	//terceira linha 
	getline(infile,troca);
	alturaELargura.str(troca);
	alturaELargura>>altura>>largura;

	outfile << this->altura << " " << this->largura << endl;

	//quarta linha
	getline(infile, troca);

	this->valor = atoi(troca.c_str());
	outfile << this->valor << endl;

	infile.get();

	int tamanho = this->altura * this->largura;
	char * pixel = new char[tamanho];

	for(int i = 0; i < this->altura; i++){
		for(int k = 0; k < this->largura; k++){
			infile.get(pixel[i*largura+k]);
		}
	}

	this->matriz = pixel;
	outfile << this->matriz << endl;
}

void Imagem::printImagem(){
	cout<<this->tipo<<endl<<this->comentario<<endl<<this->altura<<" "<<this->largura<<endl<<this->valor<<endl<<this->matriz<<endl;
}

void Imagem::setTipo(string tipo){
	this->tipo = tipo;
}

string Imagem::getTipo(){
	return tipo;
}

void Imagem::setComentario(string comentario){
	this->comentario = comentario;
}

string Imagem::getComentario(){
	return comentario;
}

void Imagem::setAltura(int altura){
	this->altura = altura;
}

int Imagem::getAltura(){
	return altura;
}

void Imagem::setLargura(int largura){
	this->largura = largura;
}

int Imagem::getLargura(){
	return largura;
}

void Imagem::setValor(int valor){
	this->valor = valor;
}

int Imagem::getValor(){
	return valor;
}

void Imagem::setMatriz(char * matriz){
	this->matriz = matriz;
}

char * Imagem::getMatriz(){
	return matriz;
}