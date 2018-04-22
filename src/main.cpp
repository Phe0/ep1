#include <bits/stdc++.h>
#include "imagem.hpp"
#include "pgm.hpp"
#include "ppm.hpp"

using namespace std;

int main (int argc, char ** argv){

	string nome;

	Pgm * pgm1 = new Pgm();

	cin >> nome;

	pgm1->setArquivo(nome);

	pgm1->lerImagem();

	pgm1->dividirComentario();

	pgm1->descriptografia();

	pgm1->printImagem();

	delete pgm1;

	return 0;
}