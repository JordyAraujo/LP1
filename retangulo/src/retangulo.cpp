#include "retangulo.hpp"

Retangulo::Retangulo():largura(0), altura(0){}

Retangulo::~Retangulo(){
	total--;
}

Retangulo::Retangulo(int l, int a):largura(l), altura(a){
	total++;
}

const int Retangulo::getTotal(){
	return total;
}

const int Retangulo::getLargura() {
	return largura;
}

void Retangulo::setLargura(int l) {
	largura = l;
}

const int Retangulo::getAltura() {
	return altura;
}
void Retangulo::setAltura(int a) {
	altura = a;
}

const int Retangulo::getArea() {
	return largura * altura;
}

const int Retangulo::getPerimetro() {
	return (2 * largura + 2 * altura);
}