#include <bits/stdc++.h>
#include "imagem.hpp"
#include "pgm.hpp"
#include "ppm.hpp"

using namespace std;

int main (int argc, char ** argv){

	string nome;

	Ppm * ppm1 = new Ppm();

	cin >> nome;

	ppm1->setArquivo(nome);

	ppm1->lerImagem();

	ppm1->dividirComentario();

	ppm1->descriptografia();

	ppm1->printImagem();

	delete ppm1;

	return 0;
}