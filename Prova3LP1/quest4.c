#include <stdio.h>
#include <stdlib.h>
#define tamanho 5

int main (void){
    int vetor[tamanho],i;
    int *vetor_final;
    vetor_final= vetor;

    printf("\tDigite %d elementos:\n",tamanho);

    for(i=0; i<tamanho; i++){
        printf("%d: ",i+1);
        scanf("%d", &vetor[i]);
    }
    printf("\nEnderecos dos vetores pares:\n");
    vetor_final= vetor;
    for(i=0; i<tamanho; i++){
        if(vetor[i]%2==0){
            printf("\nNumero %d -> Endereco = %d",vetor[i], vetor_final);
        }
        vetor_final++;
    }
    printf("\n");
}
