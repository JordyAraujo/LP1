#include "retangulo.hpp"

int main(){

	Retangulo r(10, 5);
	cout << "Largura = " << r.getLargura() << ", Altura = " << r.getAltura() << endl;

	Retangulo q;
	cout << "Largura = " << q.getLargura() << ", Altura = " << q.getAltura() << endl;

	return 0;
}