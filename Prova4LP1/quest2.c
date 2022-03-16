#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define tamanho 6

struct Aluno{
    char matricula[10];
    char nome[30];
    char serie[5];
};

struct no{
    struct  Aluno dados;
    struct no *ant;
    struct no *prox;
};

typedef struct no *ptr_no;
ptr_no fila;
int cont;
int op;

void menu();
void enfileirar(ptr_no fila);
void desenfileirar(ptr_no fila);
void mostrar(ptr_no fila);

void enfileirar(ptr_no fila){
    if(cont==tamanho){
        printf("\nA fila esta cheia!\n");
        system("pause");
    }
    else{
        char matricula[20];
        char nome [30];
        char serie[5];
        printf("Digite a matricula: ");
        scanf("%s", &matricula);
        printf("Digite o nome: ");
        scanf("%s", &nome);
        printf("Digite a serie: ");
        scanf("%s", &serie);
        while (fila->prox!=NULL){
            fila = fila->prox;
        }
        fila->prox= (ptr_no)malloc(sizeof(struct no));
        fila->prox->ant= fila;
        fila = fila->prox;
        strcpy(fila->dados.matricula,matricula);
        strcpy(fila->dados.nome,nome);
        strcpy(fila->dados.serie,serie);
        fila->prox= NULL;
        cont++;
    }
}

int main(){
    cont= 0;
    fila=(ptr_no)malloc(sizeof(struct no));
    strcpy(fila->dados.matricula, " Mat -");
    strcpy(fila->dados.nome, "Nome -");
    strcpy(fila->dados.serie, "Serie -\n\n");
    fila->ant= NULL;
    fila->prox= NULL;
    do{
        mostrar(fila);
        menu();
        scanf("%d", &op);
        switch(op){
        case 1:
            enfileirar(fila);
            break;
        case 2:
            desenfileirar(fila);
            break;
        }
    }
    while(op!=0);
    return 0;
}

void desenfileirar(ptr_no fila){
    if(cont==0){
        printf("\nA fila esta vazia!\n");
        system("pause");
    }
    else{
        fila = fila->prox;
        if(fila->prox==NULL){
            fila->ant->prox=fila->prox;
        }
        else{
            fila->ant->prox=fila->prox;
            fila->prox->ant=fila->ant;
        }
        cont--;
    }
}

void mostrar(ptr_no fila){
    system("cls");
    while(fila->prox!=NULL){
        printf("%s %s %s \n", fila->dados.matricula,fila->dados.nome,fila->dados.serie);
        fila = fila->prox;
    }
    printf("%s %s %s \n", fila->dados.matricula,fila->dados.nome,fila->dados.serie);
}

void menu()
{
    printf("\n=======MENU==========\n");
    printf("= 1 - Enfileirar    =\n");
    printf("= 2 - Desenfileirar =\n");
    printf("= 0 - Sair          =\n");
    printf("=====================\n");
    printf("Informe a opcao: ");
}
