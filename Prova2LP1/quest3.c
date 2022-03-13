#include <stdio.h>
#include <stdlib.h>

int main(){

    int x,y,z;

    printf("Digite tres numeros: ");
    scanf("%d%d%d",&x,&y,&z);

    if(x+y>z && x+z>y && y+z>x){
        printf("Formam um triangulo do tipo ");
        if(x==y && x==z)
            printf("triangulo equilatero\n");
        else
            if(x==y || x==z || y==z)
                printf("triangulo isosceles\n");
            else
                printf("triangulo escaleno\n");
    }
    else
        printf("Nao formam um triangulo\n");
}
