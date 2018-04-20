/*
#ifndef PGM_HPP
#define PGM_HPP

#include <bits/stdc++.h>
#include <fstream>
#include <sstream>
#include "imagem.hpp"

using namespace std;

class Pgm: public Imagem {

	private:
		stringstream matriz;

	public: 
		Pgm();
		~Pgm();
		void setMatriz(stringstream matriz);
		stringstream getMatriz();
		void lerPgm(stringstream matriz);
};

#endif
*/