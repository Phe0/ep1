#include <bits/stdc++>
#include "pgm.hpp"

using namespace std;

Pgm::Pgm(){
	cout<< "Construtor da classe Pgm"<<endl;
	matriz = 0;
}

Pgm::~Pgm(){
	cout<<"Destrutor da classe Pgm"<<endl;
}

void Pgm::setMatriz(vector<vector<int> > matriz ){
	this->matriz = matriz;
}