// 2006 - Identificando o Chá

#include <stdio.h>
 
int main() {
    int tipo, a, b, c, d, e, acertos=0;
    
    scanf("%d", &tipo);
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    
    if(a == tipo){
        acertos++;
    }
    if(b == tipo){
        acertos++;
    }
    if(c == tipo){
        acertos++;
    }
    if(d == tipo){
        acertos++;
    }
    if(e == tipo){
        acertos++;
    }
    
    printf("%d\n", acertos);
    
    return 0;
}