#include <stdio.h>

int main()
{
    int a,b,c,d;
    char letra;

    scanf("%d\n", &a);

    for(b=0;b<a;b++){
        scanf("%d %c %d\n", &c, &letra, &d);

    if(c == d )
        printf("%d \n", c*d);
    else if(letra>=65 && letra<=90)
        printf("%d\n", d-c);
    else
        printf("%d\n", d+c);
    }
    return 0;
}
