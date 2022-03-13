#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define tamanho 6

struct supermecado{
    char numero[6];
    char descricao[60];
    char fornecedor[20];
};

struct no{
    struct supermecado tpilha;
    struct no *proximo;
};

typedef struct no *ptr_no;
ptr_no pilha;
int i, op;

void menu();
void empilhar(ptr_no pilha);
void desempilhar(ptr_no pilha);
void mostrar(ptr_no pilha);

int main(){
    i=0;
    pilha = (ptr_no) malloc(sizeof(struct no));
    strcpy(pilha->tpilha.numero, "Num");
    strcpy(pilha->tpilha.descricao, "Descricao");
    strcpy(pilha->tpilha.fornecedor,"Fornecedor\n");
    pilha->proximo = NULL;
    do{
        mostrar(pilha);
        menu();
        printf("-O que deseja fazer? ");
        scanf("%d", &op);
        switch(op){
            case 1 : empilhar(pilha); break;
            case 2 : desempilhar(pilha); break;
        }
    }while(op!=0);
    return 0;
}

void menu(){
    printf("\n=======MENU========\n");
    printf("= 1 - Empilhar    =\n");
    printf("= 2 - Desimpilhar =\n");
    printf("= 0 - Sair        =\n");
    printf("===================\n");
}

void empilhar(ptr_no pilha){
    if(i == tamanho){
        printf("A pilha esta cheia!\n");
        system("pause");
    } else{
        while(pilha->proximo!=NULL){
            pilha = pilha->proximo;
        }
        pilha->proximo = (ptr_no) malloc(sizeof(struct no));
        pilha = pilha->proximo;
        printf("\nNumero de serie: \n");
        scanf("%s", &pilha->tpilha.numero);
        printf("Descricao: \n");
        fflush(stdin);
        gets(pilha->tpilha.descricao);
        printf("Fornecedor: \n");
        gets(pilha->tpilha.fornecedor);
        pilha->proximo = NULL;
        i++;
    }
}

void desempilhar(ptr_no pilha){
    if(i==0){
        printf("A pilha esta vazia!\n");
        system("pause");
    } else{
        ptr_no aux;
        aux = (ptr_no) malloc(sizeof(struct no));
        while(pilha->proximo!=NULL){
            aux = pilha;
            pilha = pilha->proximo;
        }
        aux->proximo = NULL;
        i--;
    }
}

void mostrar(ptr_no pilha){
    system("cls");
    while(pilha->proximo!=NULL){
        printf("%s - %s - %s\n", pilha->tpilha.numero, pilha->tpilha.descricao, pilha->tpilha.fornecedor);
        pilha = pilha->proximo;
    }
    printf("%s - %s - %s\n", pilha->tpilha.numero, pilha->tpilha.descricao, pilha->tpilha.fornecedor);
}
