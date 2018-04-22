#ifndef PGM_HPP
#define PGM_HPP

#include <bits/stdc++.h>
#include <fstream>
#include <sstream>
#include "imagem.hpp"

using namespace std;

class Pgm: public Imagem {

	private:
		int pixelInicial;
		int tamanho;
		int deslocamento;
		unsigned char * mensagem;

	public: 
		Pgm();
		~Pgm();
		void dividirComentario();
		void descriptografia();
		void printImagem();
};

#endif