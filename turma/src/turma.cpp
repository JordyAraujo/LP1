// Falta função pra get o aluno de acordo com o indice fornecido

#include "turma.hpp"

Turma::Turma():descricao("-"), codigo("-"), quantAlunos(0){}

Turma::Turma(short c):descricao("-"), codigo("-"){
    setCapacidade(c);
}

void Turma::setDescricao(string d){
    descricao = d;
}
string Turma::getDescricao(){
    return descricao;
}
void Turma::setCodigo(string c){
    codigo = c;
}
string Turma::getCodigo(){
    return codigo;
}
short Turma::getQuantAlunos(){
    return quantAlunos;
}
void Turma::setCapacidade(short cap){
    capacidade = cap;
    participantes = new Aluno[cap];
    quantAlunos = 0;
}
short Turma::getCapacidade(){
    return capacidade;
}
void Turma::addAluno(Aluno umAluno){
    if(quantAlunos < capacidade){
        participantes[quantAlunos++] = umAluno;
    }
}
Aluno Turma::getAlunoIndex(short index){
    return participantes[index];
}
void Turma::listaAlunos(){
    cout << "matricula:nome:contato:endereco:idade" << endl;
    for(short i = 0; i < quantAlunos; i++){
        cout << participantes[i].getMatricula() << ":" << participantes[i].getNome() << ":" << participantes[i].getContato() << ":" << participantes[i].getEndereco() << ":" << participantes[i].getIdade() << endl;
    }
}
/*
void Turma::deleteAluno(int m){
    if(alunos[pos].preenchido){
        alunos[pos].preenchido = false;
    } else {
        cout << "Posição não preenchida!" << endl;
    }
}
*/