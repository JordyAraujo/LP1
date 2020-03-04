// Falta função pra get o aluno de acordo com o indice fornecido

#include "turma.hpp"

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
}
short Turma::getCapacidade(){
    return capacidade;
}
void Turma::addAluno(Aluno umAluno){
    if(quantAlunos < capacidade){
        participantes[quantAlunos++] = umAluno;
    }
    /* string nomeTemp, loginTemp;
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
    alunos[pos].preenchido = true; */
}
/* void Turma::printAlunos(){
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
    aluno.setMatricula(2020000000);
    cout << "Matrícula = " << aluno.getMatricula() << endl;
    aluno.setContato("(99) 9 9999-3333");
    cout << "Contato = " << aluno.getContato() << endl;
    aluno.setEndereco("Rua X");
    cout << "Endereço = " << aluno.getEndereco() << endl;
    aluno.setNome("Fulano");
    cout << "Nome = " << aluno.getNome() << endl;
    aluno.setIdade(18);
    cout << "Idade = " << aluno.getIdade() << endl;
    return 0;
}*/