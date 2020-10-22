#ifndef TURMA_HPP
#define TURMA_HPP

#include "aluno.hpp"

class Turma{
    private:
        string descricao, codigo;
        Aluno* participantes;
        short capacidade;
        short quantAlunos;
    public:
        void setDescricao(string);
        string getDescricao();
        void setCodigo(string);
        string getCodigo();
        void setCapacidade(short);
        short getCapacidade();
        void addAluno(Aluno);
        Aluno getAlunoIndex(short);
        void listaAlunos();
//      void deleteAluno(int m);
        short getQuantAlunos();
        Turma();
        Turma(short);
};

#endif