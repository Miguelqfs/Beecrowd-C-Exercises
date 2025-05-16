// 1221 - Primo Rápido

#include <stdio.h>
#include <math.h>

int EhPrimo(unsigned long long valor){
    int divisores = 0;

    for (int i = 1; i <= sqrt(valor); i++){
        if (valor % i == 0){
            divisores++;
        }
    }

    if (divisores > 1){
        return 0;
    }else{
        return 1;
    }
}

int main() {
    unsigned long long valor;
    int testes;

    scanf("%d", &testes);

    while (testes > 0){
        scanf("%llu", &valor);

        if (EhPrimo(valor)){
            printf("Prime\n");
        }else{
            printf("Not Prime\n");
        }
        
        testes--;
    } 

    return 0;
}