// 2060 - Desafio de Bino

#include <stdio.h>

int main() {
    int quantidade, m2, m3, m4, m5, i;

    m2 = m3 = m4 = m5 = 0;

    scanf("%d", &quantidade);

    int lista[quantidade];

    for (i = 0; i < quantidade; i++){
        scanf("%d", &lista[i]);
    }
    
    for (i = 0; i < quantidade; i++){
        if (lista[i] % 2 == 0){
            m2++;
        }
        if (lista[i] % 3 == 0){
            m3++;
        }
        if (lista[i] % 4 == 0){
            m4++;
        }
        if (lista[i] % 5 == 0){
            m5++;
        }
    }
    
    printf("%d Multiplo(s) de 2\n", m2);
    printf("%d Multiplo(s) de 3\n", m3);
    printf("%d Multiplo(s) de 4\n", m4);
    printf("%d Multiplo(s) de 5\n", m5);

    return 0;
}