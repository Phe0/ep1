#ifndef IMAGEM_HPP
#define IMAGEM_HPP

#include <string>
#include <bits/stdc++>

class Imagem {

	//Atributos
	private:
		string tipo;
		int altura;
		int largura;
		int valor;
		vector <int>

	//Métodos
	public:
		Imagem();
		~Imagem();
		void setTipo(string tipo);
		string getTipo();
		void setAltura(int altura);
		int getAltura();
		void setLargura(int largura);
		int getLargura();
		void setValor(int valor);
		int getValor();

}