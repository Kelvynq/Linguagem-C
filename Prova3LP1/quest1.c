#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define tamanho 6

struct supermecado{
    int numero;
    char descricao[30];
    char fornecedor[30];
};

struct pilha{
    struct supermecado tpilha[tamanho];
    int ini;
    int fim;
};

int op;
struct pilha supermecado;

void mostrar();
void empilhar();
void desempilhar();
void menu();

void mostrar(){
    int i;
    printf("\nCaixas empilhadas\n\n");
    for(i=tamanho-1; i>=0; i--){
        printf("%d \t %s \t %s\n", supermecado.tpilha[i].numero, supermecado.tpilha[i].descricao, supermecado.tpilha[i].fornecedor);
    }
}

void empilhar(){
    if(supermecado.fim==tamanho){
        printf("\nA pilha de caixa esta cheia!\n");
        system("pause");
    } else{
        printf("\nNumero de serie do produto: ");
        scanf("%d", &supermecado.tpilha[supermecado.fim].numero);
        printf("Descricao do produto: ");
        fflush(stdin);
        gets(supermecado.tpilha[supermecado.fim].descricao);
        printf("Fornecedor: ");
        gets(supermecado.tpilha[supermecado.fim].fornecedor);
        supermecado.fim++;
    }
}

void desempilhar(){
    if(supermecado.ini==supermecado.fim){
        printf("\nA pilha de livro esta vazia!\n");
        system("pause");
    } else{
        supermecado.tpilha[supermecado.fim-1].numero = 0;
        strcpy(supermecado.tpilha[supermecado.fim-1].descricao, "");
        strcpy(supermecado.tpilha[supermecado.fim-1].fornecedor, "");
        supermecado.fim--;
    }
}

void menu(){
    printf("\n====MENU==== \n");
    printf("\n1 - Empilhar caixa");
    printf("\n2 - Desempilhar");
    printf("\n0 - Sair\n");
}

int main(){
    supermecado.ini= 0;
    supermecado.fim= 0;
    do{
        system("cls");
        mostrar();
        menu();
        printf("-O que deseja fazer? ");
        scanf("%d",&op);
        switch(op){
            case 1: empilhar(); break;
            case 2: desempilhar(); break;
        }
    } while(op!=0);
    return 0;
}
