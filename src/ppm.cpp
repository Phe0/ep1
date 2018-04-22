
/*#include <bits/stdc++.h>
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
	ofstream outfile("arquivo.ppm");
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
	alturaELargura>>a>>b;

	setAltura(a);
	setLargura(b);

	outfile << getAltura() << " " << getLargura() << endl;

	//quarta linha
	getline(infile, troca);

	setValor(atoi(troca.c_str()));
	outfile << getValor() << endl;

	infile.get();

	int tamanho = getAltura() * getLargura();
	//char * pixel = new char[tamanho * 3];
	vector <char[3]> * pixel = new vector <char[3]>;

	for(int i = 0; i < getAltura(); i++){
		for(int k = 0; k < getLargura(); k++){
			infile.get(pixel[i*getAltura()+k]);;
		}
	}

	setMatriz(pixel);
	outfile << getMatriz() << endl;
}
*/