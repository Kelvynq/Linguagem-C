#include <stdio.h>

int main()
{
    int m=1, n=1, i=0,total;

    do
    {
        total = 0;
        scanf("%d %d",&m,&n);
        if (m<=0||n<=0)
            break;
        if (m > n){
            m= m+n;
            n= m-n;
            m= m-n;
        }
        for (i = m; i <= n; i++){
            printf("%d ",i);
            total= total+i;
        }
        printf("Sum=%d\n",total);
    }
    while (1);
    return 0;
}
