// 1176 - Fibonacci em Vetor

#include <stdio.h>

unsigned long long Fibonacci(int n){
    unsigned long long atual, ant1 = 1, ant2 = 0;
    int cont = n - 1;

    for (; cont > 0; cont--){
        atual = ant1 + ant2;
        ant2 = ant1;
        ant1 = atual;
    }

    return atual;
}

int main() {
    int n, testes;

    scanf("%d", &testes);

    while (testes > 0){
        scanf("%d", &n);

        if (n == 0){
            printf("Fib(0) = 0\n");
        }else if (n == 1){
            printf("Fib(1) = 1\n");
        }else{
            printf("Fib(%d) = %llu\n", n, Fibonacci(n));
        }

        testes--;
    }

    return 0;
}