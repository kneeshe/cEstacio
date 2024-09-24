#include <stdio.h>
#include <stdlib.h>

typedef struct Aluno{
	int matricula;
	int notaPrimProva;
	int notaSegProva;
	int notaTerProva;
	char nome[20];
};

int maiorValor(int x){ //cria uma função para verificar a maior nota. em c, não existe funções aninhadas, logo, uma precisa ser criada antes da outra
	
	int maior = 0;
	
	if(x == 0){
		maior = x;
	}
	if(x > maior){
		maior = x;
	}
	
	return maior;
}

int dadoAluno(struct Aluno aluno){
	
	int n;
		
	printf("Quantos alunos deseja cadastrar? ");
	scanf("%d", &n);
	fflush(stdin);
	struct Aluno *dado = (struct Aluno*) malloc(n*sizeof(struct Aluno));
	
	if (dado == NULL){
		printf("erro ao alocar mem");
		return 1;
	}
	
	for(int i; i < n; i++){
		printf("\nAluno %d\n", i+1);
		printf("\nQual a matricula do aluno? ");
		scanf("%d", &dado[i].matricula);
		fflush(stdin);
		printf("\nQual o nome do aluno? ");
		fgets(dado[i].nome, 20, stdin);
		fflush(stdin);
		printf("Qual a nota da primeira prova? ");
		scanf("%d", &dado[i].notaPrimProva);
		maiorValor(dado[i].notaPrimProva);
		fflush(stdin);
		printf("Qual a nota da segunda prova? ");
		scanf("%d", &dado[i].notaSegProva);
		fflush(stdin);
		printf("Qual a nota da terceira prova? ");
		scanf("%d", &dado[i].notaTerProva);
		fflush(stdin);
	}
	
	for(int j = 0; j < n; j++){
		printf("\nO aluno cadastrado eh %s, da matricula %d", dado[j].nome, dado[j].matricula);
		printf("\nA nota da primeira prova foi %d", dado[j].notaPrimProva);
		printf("\nA nota da segunda prova foi %d", dado[j].notaSegProva);
		printf("\nA nota da terceira prova foi %d", dado[j].notaTerProva);
	}
	
	free(dado);
}

int main(){
	
	struct Aluno aluno;
	
	dadoAluno(aluno);
	
return 0;
}