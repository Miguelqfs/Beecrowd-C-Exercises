// 2334 - Patinhos

#include <stdio.h>

int main() {
    unsigned long long p = 1;

    while(p >= 0){
        scanf("%llu", &p);
        if (p == -1){
            return 0;
        }else if(p == 0){
            printf("%llu\n", p);
        }else{
            printf("%llu\n", (p-1));
        }
    }
    return 0;
}