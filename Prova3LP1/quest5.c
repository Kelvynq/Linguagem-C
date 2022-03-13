#include <stdio.h>
#include <stdlib.h>

void vetor(int *vet,int cont);
int minimo(int *vet,int cont);
int maximo(int *vet,int cont);

void vetor(int *vet,int cont){
    int i;
    for(i=0; i<cont; i++){
        printf("%d ", vet[i]);
    }
}

int minimo(int *vet,int cont){
    int min= vet[0];
    int i;
    for(i=0; i<cont; i++){
        if (vet[i]<min){
            min=vet[i];
        }
    }
    return min;
}

int maximo(int *vet,int cont){
    int max= vet[0];
    int i;
    for(i=0; i<cont; i++){
        if (vet[i]>max){
            max=vet[i];
        }
    }
    return max;
}

int main(){
    int *vet;
    int numero;
    int max,min;
    vet= (int*)malloc(sizeof(int));
    int cont = 0;
    do{
        printf("Digite um numero: ");
        scanf("%d", &numero);
        if(numero!=0){
            vet[cont] = numero;
            cont++;
        }
    }
    while(numero!=0);
    vetor(vet,cont);
    printf("\nMenor valor digitado: %d\n",minimo(vet,cont));
    printf("\nMaior valor digitado: %d\n",maximo(vet,cont));
    return 0;
}
