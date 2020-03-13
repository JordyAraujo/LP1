#ifndef RETANGULO_H
#define RETANGULO_H

#include <iostream>
using namespace std;

class Retangulo {
	private:
		int largura;
		int altura;
		
	public:
		Retangulo();
		~Retangulo();
		Retangulo(int, int);
		static int total;
		const static int getTotal();
		const int getLargura();
		void setLargura(int);
		const int getAltura();
		const int getArea();
		const int getPerimetro();
		void setAltura(int);
};

#endif