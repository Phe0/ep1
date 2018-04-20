/*
#ifndef PPM_HPP
#define PPM_HPP

#include <bits/stdc++.h>
#include "imagem.hpp"
#include "pixel.hpp"

using namespace std;

class Ppm : public Imagem{

	private:
		vector<int> matriz_rgb[3];

	public: 
		Ppm();
		~Ppm();
		void setMatriz_rgb(vector<int> matriz_rgb[3]);
		vector<int> getMatriz_rgb();
}

#endif
*/