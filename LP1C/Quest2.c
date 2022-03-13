#include <stdio.h>
#include <stdlib.h>
int main2 (void)
{

  int a, b, c, d, e;

  printf("Digite um numero inteiro: ");
  scanf("%d", &a);

  printf("Digite um numero inteiro: ");
  scanf("%d", &b);

  printf("Digite um numero inteiro: ");
  scanf("%d", &c);

  printf("Digite um numero inteiro: ");
  scanf("%d", &d);

  printf("Digite um numero inteiro: ");
  scanf("%d", &e);
  printf("\n");

//número menor
  if(a<b && a<c && a<d && a<e){
    printf("O número menor é %d\n", a);
  }else if(b<a && b<c && b<d && b<e){
    printf("O número menor é %d\n", b);
  }else if(c<a && c<b && c<d && c<e){
    printf("O número menor é %d\n", c);
  }else if(d<a && d<b && d<c && d<e){
    printf("O número menor é %d\n", d);
  }else if(e<a && e<b && e<c && e<d){
    printf("O número menor é %d\n", e);
  }

//numero maior
  if(a>b && a>c && a>d && a>e){
    printf("O número maior é %d", a);
  }else if(b>a && b>c && b>d && b>e){
    printf("O número maior é %d", b);
  }else if(c>a && c>b && c>d && c>e){
    printf("O número maior é %d", c);
  }else if(d>a && d>b && d>c && d>e){
    printf("O número maior é %d", d);
  }else if(e>a && e>b && e>c && e>d){
    printf("O número maior é %d", e);
  }

  return(0);
}
