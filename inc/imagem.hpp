#ifndef IMAGEM_HPP
#define IMAGEM_HPP

#include <bits/stdc++.h>
#include <fstream>

using namespace std;

class Imagem {

	//Atributos
	private:
		string arquivo;
		string tipo;
		string comentario;
		int altura;
		int largura;
		int valor;
		string matriz;

	//Métodos
	public:
		Imagem();
		~Imagem();
		void setArquivo(string arquivo);
		string getArquivo();
		void lerImagem();
		void printImagem();
		void setTipo(string tipo);
		string getTipo();
		void setComentario(string comentario);
		string getComentario();
		void setAltura(int altura);
		int getAltura();
		void setLargura(int largura);
		int getLargura();
		void setValor(int valor);
		int getValor();
};

#endif