// 1078 - Tabuada

#include <stdio.h>
 
int main() {
    int n, contador;
    
    scanf("%d",&n);
    for(contador=1; contador <= 10; contador += 1){
        printf("%d x %d = %d\n", contador, n, contador*n);
    }
    
    return 0;
}