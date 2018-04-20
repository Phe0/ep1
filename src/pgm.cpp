#include <bits/stdc++.h>
#include "pgm.hpp"
#include <fstream>
#include <sstream>

using namespace std;

Pgm::Pgm(){
	setArquivo("");
	setTipo("");
	setComentario("");
	setAltura(0); 
	setLargura(0);
	setValor(0);
}

Pgm::~Pgm(){
	setArquivo("");
	setTipo("");
	setComentario("");
	setAltura(0); 
	setLargura(0);
	setValor(0);
}