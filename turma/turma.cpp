#include "turma.hpp"

void Turma::setNome(string no){
    nome = no;
}
string Turma::getNome(){
    return nome;
}
void Turma::setIdentificacao(string id){
    identificacao = id;
}
string Turma::getIdentificacao(){
    return identificacao;
}
void Turma::addAluno(int pos){
    if(!alunos[pos].preenchido){
        string nomeTemp, loginTemp;
        int matTemp, semTemp, noTemp;
        cout << "Digite o nome do aluno: ";
        cin >> nomeTemp;
        alunos[pos].setNome(nomeTemp);
        cout << "Digite o login do aluno: ";
        cin >> loginTemp;
        alunos[pos].setLogin(loginTemp);
        cout << "Digite a matrícula do aluno: ";
        cin >> matTemp;
        alunos[pos].setMatricula(matTemp);
        cout << "Digite o semestre do aluno: ";
        cin >> semTemp;
        alunos[pos].setSemestre(semTemp);
        cout << "Digite a nota do aluno: ";
        cin >> noTemp;
        alunos[pos].setNota(noTemp);
        quantAlunos++;
        alunos[pos].preenchido = true;
    } else {
        cout << "Posição preenchida!" << endl;
    }
}
void Turma::printAlunos(){
    if(quantAlunos == 0){
        cout << "Não há alunos na turma" << endl;
    } else if (quantAlunos < 0){
        for(int i = 0; i < quantAlunos; i++){
            cout << "Aluno(a) #" << i + 1 << ":";
            cout << alunos[i].getNome() << endl;
        }
    }
}
void Turma::deleteAluno(int m){
    if(alunos[pos].preenchido){
        alunos[pos].preenchido = false;
    } else {
        cout << "Posição não preenchida!" << endl;
    }
}
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