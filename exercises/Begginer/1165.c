// 1165 - Número Primo

#include <stdio.h>

int main(void){
    int n, testes, contador, divisores = 0;

    scanf("%d", &testes);

    while(testes != 0){
        testes -= 1;

    scanf("%d", &n);

    for (contador = 1; contador <= n/2; contador += 1){
        if (n % contador == 0){
            divisores += 1;
        }
    }
    if (divisores == 1){
        printf("%d eh primo\n",n);
    }else{
        printf("%d nao eh primo\n", n);
    }
        divisores = 0;
    }

    return 0;
}