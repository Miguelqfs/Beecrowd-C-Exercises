// 1555 - Funções

#include <stdio.h>

int MaiorResultado(int x, int y){
    int rafael, beto, carlos;

    rafael = (3*x)*(3*x) + y*y;
    beto =  2*x*x + (5*y)*(5*y);
    carlos = y*y*y - 100*x;

    if (rafael > beto && rafael > carlos){
        return 1;
    }else if (beto > rafael && beto > carlos){
        return 2;
    }else{
        return 3;
    }
}

int main() {
    int testes, x, y;

    scanf("%d", &testes);

    while (testes > 0){
        testes--;

        scanf("%d %d", &x, &y);

        if (MaiorResultado(x, y) == 1){
            printf("Rafael ganhou\n");
        }else if (MaiorResultado(x, y) == 2){
            printf("Beto ganhou\n");
        }else{
            printf("Carlos ganhou\n");
        }   
    }
    
    return 0;
}