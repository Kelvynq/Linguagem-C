#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   FILE *pont_arq;
   int r[5000];
   pont_arq = fopen("arquivo1.txt", "w");

    fputs("Narutoooo\n", pont_arq);
    fputs("Sasuke\n", pont_arq);
    fputs("Deidara\n", pont_arq);
    fputs("Temari\n", pont_arq);
    fputs("Hinata\n", pont_arq);
    fputs("Kiba\n", pont_arq);
    fputs("Gaara\n", pont_arq);
    fputs("Rock lee\n", pont_arq);
    fputs("Sakura\n", pont_arq);
    fputs("Kakashi\n", pont_arq);

    printf("Dados gravados com sucesso. \n\n");
    fclose(pont_arq);

    pont_arq = fopen("arquivo1.txt", "r");
    int i;
    for(i=0; i<10; i++){
        fgets(r,5000,pont_arq);
        printf("%s", r);
    }
    fclose(pont_arq);
    return 0;
}
