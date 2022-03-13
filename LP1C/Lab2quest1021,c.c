#include <stdio.h>

int main() {

    int nota, moeda,i;
    int notas[6] = {100,50,20,10,5,2};
    double n;
    double moedas[6] = {1, 0.5, 0.25, 0.10, 0.05, 0.01};

    scanf("%lf", &n);
//NOTAS
    printf("NOTAS:\n");
    for(i=0;i<6;i++){
        nota = n/notas[i];
        n -= nota * notas[i];
        printf("%d nota(s) de R$ %d.00\n", nota, notas[i]);
    }
//MOEDAS
    printf("MOEDAS:\n");
    for(i=0;i<5;i++){
        moeda = n/moedas[i];
        n -= moeda * moedas[i];
        printf("%d moeda(s) de R$ %.2lf\n", moeda, moedas[i]);
    }
 printf("%.lf moeda(s) de R$ 0.01\n", n*100);
    return 0;
}
