#include<stdio.h>

int soma_num(int num){
   int resultado;
   if (num==1){
      return(1);
    }else{
        resultado= num+soma_num(num-1);
      }
   return(resultado);
}

int main()
{
   int num_N;
   int somatorio;

   printf("\n Digite o numero N: ");
   scanf("%d", &num_N);
   somatorio = soma_num(num_N);

   printf("\n O somatorio dos numeros de 1 ate %d = %d \n", num_N, somatorio);

 return 0;
}
