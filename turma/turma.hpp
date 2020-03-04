#include "aluno.hpp"

class Turma{
    private:
        string descricao, codigo;
        Aluno* participantes;
        short capacidade;
        short quantAlunos = 0;
    public:
        void setDescricao(string d);
        string getDescricao();
        void setCodigo(string c);
        string getCodigo();
        void setCapacidade(short cap);
        short getCapacidade();
        void addAluno(Aluno umAluno);
/*         void printAlunos();
        void deleteAluno(int m); */
        short getQuantAlunos();
};