#include "aluno.hpp"

int Aluno::getMatricula() {
    return matricula;
}
void Aluno::setMatricula(int m) {
    matricula = m;
}

int Aluno::getSemestre() {
    return semestre;
}
void Aluno::setSemestre(int s) {
    semestre = s;
}

int Aluno::getNota() {
    return nota;
}
void Aluno::setNota(int N) {
    nota = N;
}

string Aluno::getNome() {
    return nome;
}
void Aluno::setNome(string no) {
    nome = no;
}

string Aluno::getLogin() {
    return login;
}
void Aluno::setLogin(string lo) {
    login = lo;
}

int main(){
    Aluno aluno;
    aluno.setMatricula(2020000000);
    cout << "Matrícula = " << aluno.getMatricula() << endl;
    aluno.setSemestre(3);
    cout << "Semestre = " << aluno.getSemestre() << endl;
    aluno.setNota(8);
    cout << "Nota = " << aluno.getNota() << endl;
    aluno.setNome("Fulano");
    cout << "Nome = " << aluno.getNome() << endl;
    aluno.setLogin("fulano");
    string teste = aluno.getLogin();
    cout << "Login = " << teste << endl;
    return 0;
}