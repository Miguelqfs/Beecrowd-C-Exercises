// 1153 - Fatorial Simples

#include <stdio.h>

int main() {
    int valor, resultado = 1;

    scanf("%d", &valor);

    while (valor != 0){
        resultado = resultado * valor;
        valor -= 1;
    }
    printf("%d\n", resultado);

    return 0;
}