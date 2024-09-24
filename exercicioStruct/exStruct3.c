#include <stdio.h>
#include <stdlib.h>

typedef struct Aluno{ //typedef define o termo Aluno como padr�o para struct
	char nome[20];
	int matricula;
	char curso[10];
};

int numMatricula(struct Aluno alun){ //fun��o com o parametro da struct
	
	struct Aluno *aluno = (struct Aluno*)malloc(5*sizeof(struct Aluno)); //aloca��o de memoria da struct
	
	if(aluno == NULL){ //verificar se a aloca��o � permitida no espa�o de memoria
		printf("erro ao alocar memoria");
		return 1;
	}
		
	for(int i = 0; i < 5; i++){ //contador para passar os dados para as structs criadas. o termo [i] � para indicar em qual posi��o o dado ser� passado.
		printf("Qual o numero da matricula? ");
		scanf("%d", &aluno[i].matricula);
		fflush(stdin); //limpa o buffer do teclado. evita erros com o fgets
		
		printf("Qual o nome do aluno? ");
		fgets(aluno[i].nome, 20, stdin); //para pegar char com mais de uma letra
		fflush(stdin);
		
		printf("Qual curso ele esta fazendo? ");
		fgets(aluno[i].curso, 10, stdin);
		fflush(stdin);
	}
	
	for(int j = 0; j < 5; j++){
		printf("\nO numero da matricula eh %d, o nome do aluno eh %s e ele esta cursando %s\n", aluno[j].matricula, aluno[j].nome, aluno[j].curso);
	}
	free(aluno); //limpa a aloca��o de memoria
}

int main(){
	
	Aluno alun;
	
	numMatricula(alun); //chama a fun��o com o parametro da struct
}