#ifndef PPM_HPP
#define PPM_HPP

#include <bits/stdc++>
#include "imagem.hpp"
#include "pixel.hpp"

class Ppm : public Imagem{

	private:
		vector<int> matriz_rgb;

	public: 
		Ppm();
		~Ppm();
		void setMatriz_rgb(vector<int> matriz_rgb);
		vector<int> getMatriz_rgb();
}

#endif