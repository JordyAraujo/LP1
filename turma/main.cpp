#include "turma.hpp"

int main(){
	
	Turma turma;
	Aluno aluno1;
	Aluno aluno2;

	aluno1.setMatricula("2020000000");
    aluno1.setContato("(99) 9 8888-4444");
    aluno1.setEndereco("Rua X");
    aluno1.setNome("Fulano");
    aluno1.setIdade(18);

	aluno2.setMatricula("2020000001");
    aluno2.setContato("(99) 9 8888-4445");
    aluno2.setEndereco("Rua Y");
    aluno2.setNome("Beltrano");
    aluno2.setIdade(18);

	turma.setCodigo("IMD0030");
	turma.setDescricao("LP1");
	turma.setCapacidade(30);
	turma.addAluno(aluno1);
	turma.addAluno(aluno2);

	cout << "Código da Turma = " << turma.getCodigo() << endl;
	cout << "Quantidade de Alunos = " << turma.getQuantAlunos() << endl;

	cout << "Nome do Primeiro Aluno = " << turma.

	return 0;
}