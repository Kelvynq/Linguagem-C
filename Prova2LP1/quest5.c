#include<stdio.h>
#include<conio.h>
#include<string.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <locale.h>

void op1(){

  char palavra[20];
  printf("Digite uma palavra: ");
  scanf("%s",palavra);
  printf("A palavra armazenada foi: %s", palavra);
}

void op2(){

  char palavra[20];
  printf("Digite uma palavra: ");
  scanf("%s",palavra);
  int tamanho = strlen(palavra);
  printf("Tamanho da palavra: %d", tamanho);
}

void op3(){

  char palavra[20];
  char palavra2[20];
  int ret;
  printf("Digite uma palavra: ");
  scanf("%s",palavra);

  printf("Digite outra palavra: ");
  scanf("%s",palavra2);

  ret = strncmp(palavra, palavra2, 20);
  if(ret > 0)
  {
    printf("A primeira palavra eh maior");
  }
  else if(ret < 0)
  {
    printf("A segunda palavra eh maior");
  }
  else
  {
    printf("As duas palavras são iguais");
  }
}

void op4(){

  char palavra[20];
  char palavra2[20];
  printf("Digite uma palavra: ");
  scanf("%s",palavra);

  printf("Digite outra palavra: ");
  scanf("%s",palavra2);

  strcat(palavra, palavra2);
  printf("%s", palavra);
}

void op5(){

  char palavra[20];
  printf("Digite uma palavra: ");
  scanf("%s",palavra);

  int tamanho = strlen(palavra);
  printf("A palavra ao contrario: \n");
    int i;
    for(i=tamanho-1; i>=0; i--){
        printf("%c", palavra[i]);
    }
}

void op6(){

    char s[20],c;
    int count=0;
    printf("Informe os caracteres: ");
    fgets(s,sizeof(s),stdin);

    printf("Informe o caractere que deseja buscar: ");
    scanf("%c",&c);
    for(int i=0; s[i]!='\0'; ++i){
        if (c == s[i])
            ++count;
    }
    printf("Quantidade de %c = %d", c, count);
    return 0;
}

void op7(){

    char string[20];
    char ch1,ch2;
    int x, tam;

    printf("Digite uma frase:\n");
    scanf("%s", &string);
    printf("Digite alguma letra q exista na frase acima:\n");
    scanf("%s", &ch1);
    printf("Digite alguma letra q exista ou nao na frase acima:\n");
    scanf("%s", &ch2);
    tam=strlen(string);
    for(x=0; x<tam; x++)
    {
        if (string[x]==ch1)
        {
            string[x]=ch2;
        }
    }
    printf("%s", string);
}

void op8(){

    char S1[20], S2[20];
    int c=0,i,j;
    printf("String: \n");
    scanf("%s", &S1);
    printf("Substring: \n");
    scanf("%s", &S2);
    if(strlen(S1)<=strlen(S2))
    {
     printf("Nao e substring.\n");
    }
    else
    {
     for(i=0; i<strlen(S1); i++){
            if(S2[0]==S1[i]){
                for(j=0; j<strlen(S2)-1; j++){
                    if(S2[j]==S1[i++])
                        c++;
                }
            }
            if(c==strlen(S2)){
                break;
            }
        }
        if(c==strlen(S2))
            printf("E substring.\n");
        else
            printf("Nao e substring.\n");
    }
}

void op9(){

    char string[20], sub[20];
    int posicao,comprimento,c=0;

    printf("Digite uma string: \n");
    scanf("%s", &string);
    printf("Digite a posicao substring\n");
    scanf("%d", &posicao);
    printf("Digite o comprimento da substring\n");
    scanf("%d", &comprimento);
    while (c < comprimento){
        sub[c] = string[posicao+c-1];
        c++;
    }
    sub[c] = '\0';
    printf("Substring e:  \"%s\"\n", sub);
}

int main(void)
{
    char op = 0;
    while(op!='s'){

        printf("\n================ Escolha uma opcao ================\n\n");
        printf("(a) Ler uma string\n");
        printf("(b) Imprimir o tamanho da string\n");
        printf("(c) Comparar a string com uma nova string\n");
        printf("(d) Concatenar a string com uma nova string\n");
        printf("(e) Imprimir a string S1 de forma reversa\n");
        printf("(f) Contar quantas vezes um dado caractere aparece na string\n");
        printf("(g) Substituir a primeira ocorrencia do caractere C1 da string pelo caractere C2\n");
        printf("(h) Verificar se uma string e substring de S1.\n");
        printf("(i) Retornar uma substring da string S1.\n");
        printf("(s) Sair");

        printf("\n\nDigite a alternativa: ");
        scanf("%c", &op);
        system("cls");
        switch(op){
            case 'a':op1();
            break;
            case 'b':op2();
            break;
            case 'c':op3();
            break;
            case 'd':op4();
            break;
            case 'e':op5();
            break;
            case 'f':op6();
            break;
            case 'g':op7();
            break;
            case 'h':op8();
            break;
            case 'i':op9();
            break;
            case 's':op = 's';printf("Ate logo!");
            break;
            default:
            break;
        }
        printf("\nAguarde para voltar ao menu principal");
        getchar();
        Sleep(6000);
        system("cls");
    }
    return 0;
}
