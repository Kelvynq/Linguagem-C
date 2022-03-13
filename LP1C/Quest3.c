#include <stdio.h>
#include <stdlib.h>

int main3(void) {
    double km,litros;
    int paradas,i;
    float total = 0;

    printf("Quantas paradas foram realizadas?");
    scanf("%d", &paradas);

    for(i=1; i<=paradas; i++){
     printf("\nQuantos km dirigidos até o %dº abastecimento?\n",i);
     scanf("%lf", &km);
     printf("Quanto litros obtidos até o %dº abastecimento?\n",i);
     scanf("%lf", &litros);
    printf("O valor de km por litros no %dº abastecimento é %.2lf\n", i, km/litros);
     total+= (km*i)/(litros*i);
    }
     printf("\n== O total de km por litros de todos os abastecimentos é %.2f:", total);

    return 0;
}
