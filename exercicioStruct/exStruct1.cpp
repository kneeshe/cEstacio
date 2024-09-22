#include <stdio.h>
#include <stdlib.h>

struct Horario{
	int hora;
	int minuto;
	int segundo;
};

struct Data{
	int dia;
	char mes[10];
	int ano;
};

struct Compromisso{
	char descricao[50];
};


int defineHora(){
	
	struct Horario horario;
	
	printf("Qual vai ser a hora? ");
	scanf("%d", &horario.hora);
	
	printf("Qual o minuto? ");
	scanf("%d", &horario.minuto);
	
	printf("Qual o segundo? ");
	scanf("%d", &horario.segundo);
	
	return printf("O horario vai ser as %d horas, %d minutos, %d segundos. \n", horario.hora, horario.minuto, horario.segundo);
}

int defineData(){
	struct Data data;
	
	printf("Qual vai ser o dia? ");
	scanf("%d", &data.dia);
	fflush(stdin);
	
	printf("Qual vai ser o mes? ");
	fgets(data.mes, 10, stdin);
	fflush(stdin);
	
	printf("Qual vai ser o ano? ");
	scanf("%d", &data.ano);
	fflush(stdin);
	
	return printf("O compromisso ocorrera no dia %d, no mes %s, do ano %d. \n", data.dia, data.mes, data.ano);
}

char defineCompromisso(){
	struct Compromisso compromisso;
	
	printf("Descreva o compromisso: ");
	fgets(compromisso.descricao, 50, stdin);
	fflush(stdin);
	
	return printf("O compromisso sera: %s", compromisso.descricao);
}

int main(){
	
	printf(" --- AGENDA PESSOAL --- \n");
	
	defineHora();
	defineData();
	defineCompromisso();
		
return 0;	
}