#ifndef IMAGEM_HPP
#define IMAGEM_HPP

#include <string>
#include <bits/stdc++>

using namespace std;

class Imagem {

	//Atributos
	private:
		string arquivo;
		string tipo;
		int altura;
		int largura;
		int valor;

	//Métodos
	public:
		Imagem();
		~Imagem();
		void setArquivo(string arquivo);
		string getArquivo();
		void setTipo(string tipo);
		string getTipo();
		void setAltura(int altura);
		int getAltura();
		void setLargura(int largura);
		int getLargura();
		void setValor(int valor);
		int getValor();

}