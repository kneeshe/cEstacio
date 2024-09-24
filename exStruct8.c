#include <stdio.h>
#include <stdlib.h>

struct Func{
    char nome[20];
    int idade;
    char sexo[5];
    int cpf;
    int nasc;
    int codSetor;
    char cargo[30];
    float sal;
};

int cadastraFunc(struct Func funcionario){
    int n = 0;
    
    printf("Quantos funcionarios quer cadastrar? ");
    scanf("%d", &n);
    fflush(stdin);
    
    struct Func *func = (struct Func*)malloc(n*sizeof(struct Func));
    fflush(stdin);
    
    if(func == NULL){
        printf("MEM ERROR");
        return 1;
    }
    fflush(stdin);
    
    for(int i = 0; i < n; i++){
        printf("\nQual o nome do funcionario? ");
        fgets(func[i].nome, 20, stdin);
        fflush(stdin);
        
        printf("\nQual a idade do funcionario? ");
        scanf("%d", &func[i].idade);
        fflush(stdin);

        printf("\nQual o sexo do funcionario? ");
        fgets(func[i].sexo, 5, stdin);
        fflush(stdin);

        printf("\nDigite o cpf do funcionario: ");
        scanf("%d", &func[i].cpf);
        fflush(stdin);
        
        printf("\nDigite a data de nascimento do funcionario: ");
        scanf("%d", &func[i].nasc);
        fflush(stdin);
        
        printf("\nDigite o codigo do funcionario; (0-99): ");
        scanf("%d", &func[i].codSetor);
        fflush(stdin);
        
        printf("\nDigite o cargo do funcionario: ");
        fgets(func[i].cargo, 30, stdin);
        fflush(stdin);
        
        printf("\nDigite o salario do funcionario: ");
        scanf("%f", &func[i].sal);
        fflush(stdin);
    }
    
        for(int j = 0; j < n; j++){
        printf("\nO nome do funcionario eh %s", func[j].nome);
        fflush(stdin);
       
        printf("\nA idade do funcionario eh %d ", func[j].idade);
        fflush(stdin);
        
        printf("\nO sexo do funcionario eh %s", func[j].sexo);
        fflush(stdin);
        
        printf("\nO cpf do funcionario eh %d", func[j].cpf);
        fflush(stdin);
        
        printf("\nA data de nascimento do funcionario eh %d", func[j].nasc);
        fflush(stdin);
        
        printf("\nO codigo do funcionario eh: %d", func[j].codSetor);
        fflush(stdin);
        
        printf("\nO cargo do funcionario eh %s", func[j].cargo);
        fflush(stdin);
        
        printf("\nO salario do funcionario eh %.2f RS", func[j].sal);
        fflush(stdin);
    }
    free(func);
}

int main(){
    
    struct Func funcionario;
    
    cadastraFunc(funcionario);
    
    return 0;
}