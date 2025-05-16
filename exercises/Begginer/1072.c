// 1072 - Intervalo 2

#include <stdio.h>

int main() {
    int n,in=0,out=0,x=0,contador=0;

    scanf("%d", &n);

    while (n>0){
        n -= 1;
        scanf("%d", &x);

        if(x>=10 && x<=20){
            in += 1;
        }else if (x<10 || x>20){
            out += 1;
        }
    }
    printf("%d in\n", in);
    printf("%d out\n", out);

    return 0;
}