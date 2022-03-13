#include <stdio.h>
#include <stdlib.h>
int main (void)
{

  int a, b, c, d, e, i;

  printf("Digite um numero inteiro: ");
  scanf("%d", &a);

  for(i=1; i<=a; i++){
  putchar('*');
  }

  printf("\nDigite um numero inteiro: ");
  scanf("%d", &b);

  for(i=1; i<=b; i++){
  putchar('*');
  }

  printf("\nDigite um numero inteiro: ");
  scanf("%d", &c);

  for(i=1; i<=c; i++){
  putchar('*');
  }

  printf("\nDigite um numero inteiro: ");
  scanf("%d", &d);

  for(i=1; i<=d; i++){
  putchar('*');
  }

  printf("\nDigite um numero inteiro: ");
  scanf("%d", &e);

  for(i=1; i<=e; i++){
  putchar('*');
  }

  return(0);
}
