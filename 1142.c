// 1142 - PUM

#include <stdio.h>

int main(){
    int contador, nSequencias, numero = 1;

    scanf("%d", &nSequencias);

    while (nSequencias != 0){
        for (contador = 3; contador != 0; contador -= 1){
            printf("%d ", numero);
            numero += 1;
        }
        
        printf("PUM\n");
        numero += 1;
        nSequencias -= 1;
    }
    
    return 0;
}