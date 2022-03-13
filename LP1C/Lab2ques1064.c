#include <stdio.h>

int main() {

    int i, valorposi=0;
    float num, media=0, totalnum=0;

    for(i=0; i<6; i++){
        scanf("%f", &num);

        if(num>0){
            valorposi++;
            totalnum += num;

        }
    }
     media = totalnum/valorposi;

    printf("%d valores positivos\n", valorposi);
    printf("%.1f\n", media);
    return 0;
}
