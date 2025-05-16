// 1101 - Sequência de Números e Soma

#include <stdio.h>

int main() {
    int n = 1, m = 1, contador, sequencia, maior, soma = 0;

    while (n > 0 && m > 0){
        scanf("%d %d", &n, &m);
        
        if(n > 0 && m > 0){
            for (contador = 0; n > m && contador < ((n-m)+1); contador += 1){
                sequencia = m + contador;
                soma += sequencia;
                printf("%d ", sequencia);
            }
            for (contador = 0; m > n && contador < ((m-n)+1); contador += 1){
                sequencia = n + contador;
                soma += sequencia;
                printf("%d ", sequencia);
            }

            printf("Sum=%d\n", soma);

            soma = 0;
            sequencia = 0;
        }
    }

    return 0;
}