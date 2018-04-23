#include <bits/stdc++.h>
#include "imagem.hpp"
#include "pgm.hpp"
#include "ppm.hpp"

using namespace std;

int main (int argc, char ** argv){

	string nome;

	Ppm * imagem1 = new Ppm();

	cin >> nome;

	imagem1->setArquivo(nome);

	imagem1->lerImagem();

	imagem1->dividirComentario();

	imagem1->descriptografia();

	imagem1->printImagem();

	delete imagem1;

	return 0;
}