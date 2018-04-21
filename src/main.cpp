#include <bits/stdc++.h>
#include "imagem.hpp"
#include "pgm.hpp"
#include "ppm.hpp"

using namespace std;

int main (int argc, char ** argv){

	int tipo;

	cout<< "Se sua Imagem for do tipo PGM, digite 1" << "Se sua imagem for do tipo PPM, digite 2" << endl;
	cin >> tipo;

	if(tipo == 1){
		Pgm * pgm1 = new Pgm();
		string nome;

		cout<< "Insira o nome da sua imagem:";
		cin>>nome;

		pgm1->setArquivo(nome);

		pgm1->lerImagem();

		pgm1->printImagem();

		delete pgm1;
	}

	else if(tipo == 2){
		Ppm * ppm1 = new Ppm();
		string nome;

		cin>>nome;

		ppm1->setArquivo(nome);

		ppm1->lerImagem();

		ppm1->printImagem();

		delete ppm1;
	}

	return 0;
}