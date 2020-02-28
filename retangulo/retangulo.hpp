#include <iostream>
using namespace std;

class Retangulo {
	private:
		int largura;
		int altura;
		int area();
		int perimetro();
		
	public:
		int getLargura();
		void setLargura(int l);
		int getAltura();
		void setAltura(int a);
};