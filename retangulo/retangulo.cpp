#include "retangulo.hpp"

int Retangulo::getLargura() {
	return largura;
}

void Retangulo::setLargura(int l) {
	largura = l;
}

int Retangulo::getAltura() {
	return altura;
}
void Retangulo::setAltura(int a) {
	altura = a;
}

int Retangulo::area() {
	return largura * altura;
}
int Retangulo::perimetro() {
	return (2 * largura + 2 * altura);
}