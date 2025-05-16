// 1169 - Trigo no Tabuleiro

#include <stdio.h>

int main() {
    unsigned long long testes, casas, valor, soma;

    scanf("%llu", &testes);

    while (testes--) {
        scanf("%llu", &casas);

        if (casas == 1) {
            printf("0 kg\n");
        } else {
            valor = 1;  
            soma = 0;   

            while (casas > 0) {
                soma += valor;
                valor *= 2;
                casas--;
            }

            unsigned long long resultado = soma / 12000;

            printf("%llu kg\n", resultado);
        }
    }

    return 0;
}
