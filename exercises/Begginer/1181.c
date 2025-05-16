// 1181 - Linha na Matriz

#include <stdio.h>
 
int main() {
    int linha;
    char operacao;
    double soma = 0.0, matriz[12][12];

    scanf("%d", &linha);
    scanf(" %c", &operacao);

    for (int i = 0; i < 12; i++){
        for (int j = 0; j < 12; j++){
            scanf("%lf", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 12; i++){
        soma += matriz[linha][i];
    }

    if (operacao == 'S'){
        printf("%.1lf\n", soma);
    }else{
        printf("%.1lf\n", soma / 12.0);
    }
 
    return 0;
}