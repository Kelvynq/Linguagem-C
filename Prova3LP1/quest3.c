#include <stdio.h>

void troque(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int main(void){
    int A,B;
    printf("Digite dois numeros inteiros: \n");
    scanf("%d%d", &A,&B);
    troque(&A,&B);
    printf("\n%d %d \n",A,B);
    return 0;
}
