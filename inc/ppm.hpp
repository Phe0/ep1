#ifndef PPM_HPP
#define PPM_HPP

#include <bits/stdc++.h>
#include "imagem.hpp"

using namespace std;

class Ppm : public Imagem{

	public:
		int pixelInicial;
		int tamanho;
		string chave;
		string mensagem;

	public: 
		Ppm();
		~Ppm();
		void lerImagem();
		void dividirComentario();
		void descriptografia();
		void printImagem();
};

#endif