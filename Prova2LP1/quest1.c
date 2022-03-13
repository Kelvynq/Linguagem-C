#include <stdio.h>
#include <assert.h>
#include<conio.h>

int ehPar(int numero){
    if (numero%2==0){
        return 1;
    }else{
        return 0;
    }
}

int main (void){
    printf("%d\n", ehPar(5));
    printf("%d\n", ehPar(73));
    printf("%d\n", ehPar(44));
    printf("%d\n", ehPar(12));
    return 0;
}
