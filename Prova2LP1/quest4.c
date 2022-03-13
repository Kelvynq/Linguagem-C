#include <stdio.h>
#include <stdlib.h>

int main(){
    char str1[20];
    char str2[20];

     printf("\nPrimeira string: ");
     scanf("%s",str1);
     printf("Segunda string: ");
     scanf("%s",str2);
       if(strcmp(str1,str2) == 0)
         printf("Strings sao iguais\n");
       else{
         strcat(str1,str2);
         printf("\n%s\n",str1);
       }
}
