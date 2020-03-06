#include "aluno.hpp"

Aluno::Aluno(){
    matricula = "Não Informada";
    nome = "Não Informado";
    contato = "Não Informado";
    endereco = "Não Informado";
    nome = "Não Informado";
    idade = 0;
}

string Aluno::getMatricula() {
    return matricula;
}
void Aluno::setMatricula(string m) {
    matricula = m;
}

string Aluno::getContato() {
    return contato;
}
void Aluno::setContato(string c) {
    contato = c;
}

string Aluno::getEndereco() {
    return endereco;
}
void Aluno::setEndereco(string e) {
    endereco = e;
}

string Aluno::getNome() {
    return nome;
}
void Aluno::setNome(string n) {
    nome = n;
}

short Aluno::getIdade() {
    return idade;
}
void Aluno::setIdade(short i) {
    idade = i;
}