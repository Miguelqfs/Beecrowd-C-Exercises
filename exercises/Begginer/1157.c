// 1157 - Divisores I

#include <stdio.h>

int main() {
    int n, d;

    scanf("%d", &n);
    for (d = 1; d <= n; d += 1){
        if (n % d == 0){
            printf("%d\n", d);
        }
    }

    return 0;
}