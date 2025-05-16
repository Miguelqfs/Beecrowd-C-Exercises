// 1017 - Gasto de Combustível

#include <stdio.h>
 
int main() {
    int tempo, velocidade, distancia;
    float combustivel;
    
    scanf("%d", &tempo);
    scanf("%d", &velocidade);
    
    distancia = tempo*velocidade;
    
    combustivel = distancia / 12.0;
    
    printf("%.3f\n", combustivel);
 
    return 0;
}