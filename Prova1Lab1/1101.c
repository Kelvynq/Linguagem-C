#include<stdio.h>

int main(){

   int M,N,soma, c;

   do{

    scanf("%d %d", &M, &N);

    }while(M<=0 || N<=0);

   soma=0;
            if(M<N)
            {
                for(c=M; c<=N; c++)
                {
                    printf("%d ",c);
                    soma+=c;
                }
                printf("Sum=%d\n",soma);
            }
            else if(M>N)
            {
                for(c=N; c<=M; c++)
                {
                    printf("%d ",c);
                    soma+=c;
                }
                printf("Sum=%d\n",soma);
            }

    return 0;

}
