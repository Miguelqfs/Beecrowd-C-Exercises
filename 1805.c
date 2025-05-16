// 1805 - Soma Natural

#include <stdio.h>

int main(){
    long long int a, b, soma;

    scanf("%lld %lld", &a, &b);

    for (soma = 0; a <= b; a += 1){
        soma += a;
    }

    printf("%lld\n", soma);

    return 0;
}