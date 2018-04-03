#ifndef PGM_HPP
#define PGM_HPP

#include <bits/stdc++>
#include "imagem.hpp"

class Pgm: public Imagem {

	private:
		vector<vector<int> > matriz;

	public: 
		Pgm();
		~Pgm();
		void setMatriz(vector<vector<int> > matriz );
}

#endif