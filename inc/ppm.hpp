#ifndef PPM_HPP
#define PPM_HPP

#include <bits/stdc++.h>
#include "imagem.hpp"
#include "pixel.hpp"

using namespace std;

class Ppm : public Imagem{

	private:
		char cores[3];

	public: 
		Ppm();
		~Ppm();
		void lerImagem();
};

#endif