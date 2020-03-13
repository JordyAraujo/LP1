#ifndef ALUNO_HPP
#define ALUNO_HPP

#include <iostream>
#include <string>

using namespace std;

class Aluno{
    private:
        string matricula, nome, contato, endereco;
        short idade;
    public:
        string getMatricula();
        void setMatricula(string m);
        string getContato();
        void setContato(string c);
        string getEndereco();
        void setEndereco(string e);
        string getNome();
        void setNome(string n);
        short getIdade();
        void setIdade(short i);
};