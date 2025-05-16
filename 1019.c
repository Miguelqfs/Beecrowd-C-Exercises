// 1019 - Conversão de Tempo

#include <stdio.h>
 
int main() {
    int seg, min, hor;

    scanf("%d", &seg);

    hor = seg / 3600;

    seg %= 3600;

    min = seg / 60;

    seg %= 60;

    printf("%d:%d:%d\n", hor, min, seg);
 
    return 0;
}