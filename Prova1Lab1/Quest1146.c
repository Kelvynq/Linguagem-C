#include <stdio.h>

int main (void)
{

    int X,i;
    while(scanf("%d", &X), X)
    {
        for (i = 1; i <= X; i++)
        {
            printf("%d", i);
            if( i == X)
                printf("\n");
            else
                printf(" ");
        }
    }
    return 0;
}

