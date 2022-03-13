#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define tamanho 6

struct aluno{
    char matricula[6];
    char nome[50];
    char ano[4];
};

struct tfila{
    struct aluno dados[tamanho];
    int ini;
    int fim;
};

int op;
struct tfila fila;

void mostrar();
void enfileirar();
void desenfileirar();
void menu();

void mostrar(){
    int i;
    printf("\nFila de alunos\n\n");
    for(i=0; i<tamanho; i++) {
        printf("%s\t%s\t%s\n", fila.dados[i].matricula, fila.dados[i].nome, fila.dados[i].ano);
    }
    printf("\n");
}

void enfileirar(){
    if(fila.fim == tamanho){
        printf("\nA fila esta cheia!\n");
        system("pause");
    } else{
        fflush(stdin);
        printf("\nAno do aluno: ");
        gets(fila.dados[fila.fim].matricula);
        printf("Nome do aluno: ");
        gets(fila.dados[fila.fim].nome);
        printf("Matricula do aluno: ");
        gets(fila.dados[fila.fim].ano);
        fila.fim++;
    }
}

void desenfileirar(){
    if(fila.ini==fila.fim){
        printf("\nA fila esta vazia!\n");
        system("pause");
    } else{
        int i;
        for(i=0;i<tamanho; i++){
            strcpy(fila.dados[i].matricula,fila.dados[i+1].matricula);
            strcpy(fila.dados[i].nome,fila.dados[i+1].nome);
            strcpy(fila.dados[i].ano,fila.dados[i+1].ano);
        }
        fila.fim--;
    }
}

void menu(){
    printf("\n====MENU====\n");
    printf("\n1 - Enfileirar");
    printf("\n2 - Desenfileirar");
    printf("\n0 - Sair\n");
}

int main(){
    fila.ini = 0;
    fila.fim = 0;
    do{
        system("cls");
        mostrar();
        menu();
        printf("-O que deseja fazer? ");
        scanf("%d", &op);
        switch(op){
            case 1: enfileirar(); break;
            case 2: desenfileirar(); break;
        }
    } while(op!=0);
    return 0;
}
