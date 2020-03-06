#include "turma.hpp"

int main(){
	
	Turma turma1;
	Turma turma2(1);
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

	turma1.setCodigo("IMD0030");
	turma1.setDescricao("LP1");
	turma1.setCapacidade(30);
	turma1.addAluno(aluno1);
	turma1.addAluno(aluno2);

	cout << "Código da Turma = " << turma1.getCodigo() << endl;
	cout << "Quantidade de Alunos = " << turma1.getQuantAlunos() << endl;

	turma1.listaAlunos();

	turma2.setCodigo("IMD1030");
	turma2.setDescricao("LP2");
	turma2.addAluno(aluno1);
	turma2.addAluno(aluno2);

	cout << "Código da Turma = " << turma2.getCodigo() << endl;
	cout << "Quantidade de Alunos = " << turma2.getQuantAlunos() << endl;

	turma2.listaAlunos();

	return 0;
}