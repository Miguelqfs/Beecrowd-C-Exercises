// 1175 - Troca em Vetor I

#include <stdio.h>
 
int main() {
    int i, aux, n[20];

    for (i = 0; i < 20; i++){
        scanf("%d", &n[i]);
    }
    for (i = 0; i < 20; i++){
        if (i < 10){
            aux = n[i];
            n[i] = n[19 - i];
            n[19 - i] = aux;
        }
    }
    for (i = 0; i < 20; i++){
        printf("N[%d] = %d\n", i, n[i]); 
    }
 
    return 0;
}