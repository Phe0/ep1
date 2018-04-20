#include <bits/stdc++.h>
#include "imagem.hpp"
#include "pgm.hpp"
#include "ppm.hpp"

using namespace std;

int main (int argc, char ** argv){
Pgm * pgm1 = new Pgm();
string nome;

cin>>nome;

pgm1->setArquivo(nome);

pgm1->lerImagem();

pgm1->printImagem();

delete pgm1;

}