// 1929 - Triângulo

#include <stdio.h>

int EhTriangulo(int x, int y, int z){
    if (x >= (y + z)){
        return 0;
    }else if (y >= (x + z)){
        return 0;
    }else if (z >= (x + y)){
        return 0;
    }
    
    return 1;
}
 
int main() {
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (EhTriangulo(a, b, c) == 1){
        puts("S");
    }else if (EhTriangulo(b, c, d) == 1){
        puts("S");
    }else if (EhTriangulo(a, b, d) == 1){
        puts("S");
    }else if (EhTriangulo(a, c, d) == 1){
        puts("S");
    }else{
        puts("N");
    }
    
    return 0;
}