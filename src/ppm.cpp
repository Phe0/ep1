#include <bits/stdc++>
#include "ppm.hpp"

using namespace std;

Ppm::Ppm(){
	cout<< "Construtor da classe Ppm"<<endl;
	matriz_rgb = 0;
}

Ppm::~Ppm(){
	cout<< "Destrutor da classe Pixel"<<endl;
}

void Ppm::setMatriz_rgb(vector<int> matriz_rgb){
	this->matriz_rgb;
}
vector<int> Ppm::getMatriz_rgb(){
	return matriz_rgb;
}