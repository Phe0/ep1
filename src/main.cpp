#include <bits/stdc++.h>
#include "imagem.hpp"
#include "pgm.hpp"
#include "ppm.hpp"

using namespace std;

int main (int argc, char ** argv){

	string nome;

	cin >> nome;

	int tamanho = nome.length();

	if(nome[tamanho - 2] == 'g'){
		Pgm * imagem1 = new Pgm;
		imagem1->setArquivo(nome);

		imagem1->lerImagem();

		imagem1->dividirComentario();

		imagem1->descriptografia();

		imagem1->printImagem();

		delete imagem1;
	}

	else if(nome[tamanho - 2] == 'p'){
		Ppm * imagem1 = new Ppm;
		imagem1->setArquivo(nome);

		imagem1->lerImagem();

		imagem1->dividirComentario();

		imagem1->descriptografia();

		imagem1->printImagem();
	}

	else{
		cout << "Tipo de imagem invalido" << endl;
		exit(EXIT_FAILURE);
	}

	return 0;
}