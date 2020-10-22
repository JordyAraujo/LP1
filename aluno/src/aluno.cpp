#include "aluno.hpp"

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

int main(){
    Aluno aluno;
    aluno.setMatricula("2020000000");
    cout << "Matrícula = " << aluno.getMatricula() << endl;
    aluno.setContato("(99) 9 8888-4444");
    cout << "Contato = " << aluno.getContato() << endl;
    aluno.setEndereco("Rua X");
    cout << "Endereco = " << aluno.getEndereco() << endl;
    aluno.setNome("Fulano");
    cout << "Nome = " << aluno.getNome() << endl;
    aluno.setIdade(18);
    cout << "Idade = " << aluno.getIdade() << endl;
    return 0;
}