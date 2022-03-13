#include <stdio.h>
#include <math.h>

int main(){

    int D, vf, vg;
    double d;

    while(scanf("%d %d %d", &D, &vf, &vg) > 0){
    d = sqrt(pow(12.0, 2.0) + pow(D, 2.0));

      if((12.0 / vf) >= (d / vg)){
         printf("S\n");
        }
      else{
         printf("N\n");
        }
    }
    return 0;
}
