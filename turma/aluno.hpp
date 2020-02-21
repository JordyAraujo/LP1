#include <iostream>
#include <string>

using namespace std;

class Aluno{
    private:
        string nome, login;
        int matricula, semestre, nota;
    public:
        int getMatricula();
        void setMatricula(int m);
        int getSemestre();
        void setSemestre(int s);
        int getNota();
        void setNota(int N);
        string getNome();
        void setNome(string nome);
        string getLogin();
        void setLogin(string login);
};