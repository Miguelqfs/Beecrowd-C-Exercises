// 1161 - Soma de Fatoriais

#include <stdio.h>

unsigned long long SomaDeFatoriais(unsigned long long valor1, unsigned long long valor2){
    if (valor1 == 0){
        valor1 = 1;
    }
    if (valor2 == 0){
        valor2 = 1;
    }
    
    for (int i = valor1 - 1; i > 1; i--){
        valor1 = valor1 * i;
    }
    for (int i = valor2 - 1; i > 1; i--){
        valor2 = valor2 * i;
    }

    return valor1 + valor2;
}

int main() {
    unsigned long long valor1, valor2;

    while (scanf("%llu %llu", &valor1, &valor2) != EOF){
        printf("%llu\n", SomaDeFatoriais(valor1, valor2));
    }

    return 0;
}