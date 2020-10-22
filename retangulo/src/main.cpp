#include "retangulo.hpp"

int Retangulo::total = 0;

int main(){

	Retangulo r(10, 5);
	cout << "Largura de r = " << r.getLargura() << ", Altura de r = " << r.getAltura() << ", Área de r = " << r.getArea() << ", Perímetro de r = " << r.getPerimetro() << endl;

	Retangulo s(7,3);
	cout << "Largura de s = " << s.getLargura() << ", Altura s = " << s.getAltura() << ", Área de s = " << s.getArea() << ", Perímetro de s = " << s.getPerimetro() << endl;

	Retangulo *t = new Retangulo(21, 22);
	cout << "Largura de t = " << t->getLargura() << ", Altura t = " << t->getAltura() << ", Área de t = " << t->getArea() << ", Perímetro de t = " << t->getPerimetro() << endl;
	delete t;

	cout << "Número de Instâncias: ";
	cout << Retangulo::getTotal() << endl;

	return 0;
}