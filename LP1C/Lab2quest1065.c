#include <stdio.h>

#include<stdio.h>

int main(){
    int n,num,i,count,aux;

    scanf("%d",&n);
    for(num = 1;num<=n;num++){
            scanf("%d",&aux);
         count = 0;
         for(i=2;i<=aux/2;i++){
             if(aux%i==0){
                 count++;
                 break;
             }
        }

         if(count==0 && aux!= 1)
             printf("%d eh primo\n",aux);
             else
                 printf("%d nao eh primo\n",aux);
    }

   return 0;
}
