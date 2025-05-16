// 2235 - Andando no Tempo

#include <stdio.h>
#include <math.h>

int main(void){
    int A,B,C;

    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);

    if ((A-B == 0) || (A-C == 0) || (B-C== 0)){
        printf("S\n");
    }else if((A-(B+C)==0) || (B-(A+C)==0) || (C-(A+B)==0)){
        printf("S\n");
    }else
        printf("N\n");

    return 0;
}
