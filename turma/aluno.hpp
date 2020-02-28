#include <iostream>
#include <string>

using namespace std;

class Aluno{

    private:
        string nome, login;
        int identificacao, semestre, nota;
        bool preenchido = false;
        
    public:
        int getID();
        void setID(int i);
        int getSemestre();
        void setSemestre(int s);
        int getNota();
        void setNota(int N);
        string getNome();
        void setNome(string nome);
        string getLogin();
        void setLogin(string login);
};