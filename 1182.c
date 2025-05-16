// 1182 - Coluna na Matriz

#include <stdio.h>
 
int main() {
    int coluna;
    char operacao;
    double soma = 0.0, matriz[12][12];

    scanf("%d", &coluna);
    scanf(" %c", &operacao);

    for (int i = 0; i < 12; i++){
        for (int j = 0; j < 12; j++){
            scanf("%lf", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 12; i++){
        soma += matriz[i][coluna];
    }

    if (operacao == 'S'){
        printf("%.1lf\n", soma);
    }else{
        printf("%.1lf\n", soma / 12.0);
    }
    
 
    return 0;
}