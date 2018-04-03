#include <bits/stdc++>
#include "imagem.hpp"

using namespace std;

Imagem::Imagem(){
	cout<< "Construtor da classe Imagem"<<endl;
	arquivo = "";
	tipo = "";
	altura = 0; 
	largura = 0;
	valor = 0;
}

Imagem::~Imagem(){
	cout<<"Destrutor da classe Imagem"<<endl;
}
void Imagem::setArquivo(string arquivo){
	this->arquivo = arquivo;
}
string Imagem::getArquivo(){
	return arquivo;
}
void Imagem::setTipo(string tipo){
	this->tipo = tipo;
}
string Imagem::getTipo(){
	return tipo;
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