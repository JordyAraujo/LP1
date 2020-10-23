#include <iostream> 
#include <cstdlib>

#include "dado.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
	if (argc == 2) {
		Dado meu_dado;
		for (int i = 0;i < atoi(argv[1]); ++i) {
			cout << meu_dado.jogar() << endl;
		} 	
	} else {
		cout << "Deve-se colocar um argumento junto com a chamada do programa." << endl;
		cout << "Certifique-se de usar o formato ./bin/main n" << endl;
		cout << "Onde n é o número de dados a serem lançados." << endl;
	}
	return 0; 
}