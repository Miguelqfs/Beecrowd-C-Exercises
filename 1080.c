// 1080 - Maior e Posição

#include <stdio.h>
 
int main() {
    int tentativas = 100, flag = 1, posicao = 1, valor, ordem, maior;

    while (tentativas > 0){
        scanf("%d", &valor);

        if (flag == 1){
            maior = valor;
            flag = 0;
        }
        if (valor > maior){
            maior = valor;
            ordem = posicao;
        }
        posicao += 1;
        tentativas -= 1;
    }
    printf("%d\n%d\n", maior, ordem);

    return 0;
}