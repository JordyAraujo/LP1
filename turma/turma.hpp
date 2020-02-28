#include "aluno.hpp"

class Turma{
    private:
        string nome, identificacao;
        Aluno alunos[100];
        int quantAlunos = 0;
    public:
        void setNome(string nom);
        string getNome();
        void setIdentificacao(string ident);
        string getIdentificacao();
        void addAluno(int p);
        void printAlunos();
        void deleteAluno(int mat);
        int getQuantAlunos();
};