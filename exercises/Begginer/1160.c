// 1160 - Crescimento Populacional

#include <stdio.h>

int main(){
    int testes, anos;
    long int pa, pb;
    double cre1, cre2;

    scanf("%d", &testes);

    while (testes--){
        scanf("%ld %ld %lf %lf", &pa, &pb, &cre1, &cre2);

        cre1 /= 100;
        cre2 /= 100;

        anos = 0;
        while (pa <= pb) {
            pa = pa + pa * cre1;
            pb = pb + pb * cre2;
            anos++;

            if (anos > 100) {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }

        if (anos <= 100) {
            printf("%d anos.\n", anos);
        }
    }

    return 0;
}
