// 1014 - Consumo

#include <stdio.h>
 
int main() {
    int dist;
    float comb, consumo;
 
    scanf("%d", &dist);
    scanf("%f", &comb);
    
    consumo = dist / comb;
    
    printf("%.3f km/l\n", consumo);
 
    return 0;
}