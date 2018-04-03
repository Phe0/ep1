#ifndef PIXEL_HPP
#define PIXEL_HPP

#include <bits/stdc++>
#include "imagem.hpp"

using namespace std;

class Pixel {

	private:
		int red;
		int green;
		int blue;

	public: 
		Pixel();
		~Pixel();
		void setRed(int red);
		int getRed();
		void setGreen(int green);
		int getGreen();
		void setBlue(int blue);
		int getBlue();
}

#endif