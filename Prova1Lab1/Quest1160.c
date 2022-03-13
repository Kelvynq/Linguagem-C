#include <stdio.h>
int main ()
{

    int T, PA, PB, cont = 0, i;
    double G1, G2;

    scanf("%d", &T);

    for (i= 0; i< T; i++){
        scanf("%d %d %lf %lf", &PA, &PB, &G1, &G2);

        while (PA <= PB && cont < 101){
            PA= PA+(int)((PA*G1)/100);
            PB= PB+(int)((PB*G2)/100);
            cont++;
        }

        if (cont > 100){
            printf("Mais de 1 seculo.\n");
        }
        else{
            printf("%d anos.\n", cont);
        }
        cont = 0;
    }
    return 0;
}
