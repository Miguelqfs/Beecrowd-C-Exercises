// 1164 - Número Perfeito

#include <stdio.h>

int main() {
    int contador, x, d, soma = 0;

    scanf("%d", &contador);

    while (contador != 0){
        contador -= 1;

        scanf("%d", &x);

        for (d = 1; d < x; d += 1){
            if (x % d == 0){
                soma += d;
            }
        }
        if (soma == x){
            printf("%d eh perfeito\n", x);
        }else{
            printf("%d nao eh perfeito\n", x);
        }
        soma = 0;
        d = 0;
    }

    return 0;
}