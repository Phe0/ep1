/*
#include <bits/stdc++.h>
#include "pgm.hpp"
#include <fstream>
#include <sstream>

using namespace std;

Pgm::Pgm(){
	cout<< "Construtor da classe Pgm"<<endl;
	matriz = 0;
}

Pgm::~Pgm(){
	cout<<"Destrutor da classe Pgm"<<endl;
}

void Pgm::setMatriz(stringstream matriz ){
	this->matriz = matriz;
}

stringstream Pgm::getMatriz(){
	return matriz;
}

int Pgm::lerPgm(){
	int array[this->altura][this->largura];
	int altura = 0;
	int largura = 0;
	for(altura = 0;	altura < this->altura; ++altura){
		for(largura = 0; largura < this->largura; ++largura){
			this->matriz >> array[altura][largura];
		}
	}

	for(altura = 0;	altura < this->altura; ++altura){
		for(largura = 0; largura < this->largura; ++largura){
			cout << array[altura][coluna] << " ";
		}
		cout << endl;
	}
}
*/