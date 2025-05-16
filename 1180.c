// 1180 - Menor e Posição

#include <stdio.h>
 
int main() {
    int tam, menor, posicao;
    
    scanf("%d", &tam);

    int vetor[tam];

    for (int i = 0; i < tam; i++) {
        scanf("%d", &vetor[i]);
    }
        menor = vetor[0];
    for (int i = 0; i < tam; i++) {
        if (vetor[i] < menor){
            menor = vetor[i];
            posicao = i;
        }
    }
    
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posicao);

    return 0;
}