// 1170 - Blobs

#include <stdio.h>

int main() {
    int testes, dias = 0;
    float comida;
    scanf("%d", &testes);

    while(testes != 0){
        testes -= 1;

        scanf("%f", &comida);

        while(comida > 1){
            comida = comida/2;
            dias += 1;
        }
        printf("%d dias\n", dias);
        dias = 0;
    }

    return 0;
}