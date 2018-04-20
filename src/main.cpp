#include <bits/stdc++.h>
#include "imagem.hpp"
#include "pgm.hpp"
#include "ppm.hpp"

using namespace std;

int main (int argc, char ** argv){
Imagem * imagem1 = new Imagem();
string nome;

cin>>nome;

imagem1->setArquivo(nome);

imagem1->lerImagem();

imagem1->printImagem();

delete imagem1;

}