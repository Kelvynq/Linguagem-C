#include <stdio.h>
#include <stdlib.h>

float media(float n1, float n2, float n3, char palavra){
       if(palavra=='A' || palavra=='a'){
          return ((n1+n2+n3)/3);
       }else
         if(palavra=='P' || palavra=='p'){
          return ((n1*5+n2*3+n3*2)/10);
    }
}

int main(){

      float n1,n2,n3,med;
      char palavra;

      printf("\nDigite A para media aritmética ou digite P para media ponderada]: ");
      scanf("%c",&palavra);

      printf("Digite as 3 notas: \n");
      scanf("%f %f %f", &n1, &n2, &n3);

      med = media(n1,n2,n3,palavra);
      printf("Media= %.2f",med);
      return 0;
}
