#include "retangulo.hpp"

int main(){

	Retangulo r;
	r.setAltura(10);
	r.setLargura(5);
	std::cout << "Largura = " << r.getLargura() << ", Altura = " << r.getAltura() << endl;

	return 0;
}