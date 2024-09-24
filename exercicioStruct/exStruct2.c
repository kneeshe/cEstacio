#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char nome[20];
	int idade;
	char endereco[40];
} Pessoa;

int pegaIdade(Pessoa pessoa){
	printf("Qual a sua idade? ");
	scanf("%d", &pessoa.idade);
	fflush(stdin);
	
	return printf("\nSua idade eh %d", pessoa.idade);
}

char pegaDados(Pessoa pessoa){
	printf("\nQual o seu nome? ");
	fgets(pessoa.nome, 20, stdin);
	fflush(stdin);
	
	printf("\nQual o seu endereco? ");
	fgets(pessoa.endereco, 40, stdin);
	
	return printf("Seu nome eh %s e o seu endereco eh %s", pessoa.nome, pessoa.endereco);
}


int main(){
	
	Pessoa pessoa;
	
	pegaIdade(pessoa);
	pegaDados(pessoa);

return 0;
}