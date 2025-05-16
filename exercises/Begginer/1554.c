// 1554 - Bilhar N+1

#include <stdio.h>
#include <math.h>

double Distancia(int xBranca, int yBranca, int xOutra, int yOutra) {
    return sqrt((xBranca - xOutra) * (xBranca - xOutra) + (yBranca - yOutra) * (yBranca - yOutra)); 
}

int main() {
    int testes, nBolas, posicaoMenor, xBranca, xOutra, yBranca, yOutra;
    double menor, dist;

    scanf("%d", &testes);

    while (testes > 0){
        scanf("%d", &nBolas);
        scanf("%d %d", &xBranca, &yBranca);

        scanf("%d %d", &xOutra, &yOutra);
        menor = Distancia(xBranca, yBranca, xOutra, yOutra);
        posicaoMenor = 1;

        for (int i = 1; i < nBolas; i++) {
            scanf("%d %d", &xOutra, &yOutra);

            dist = Distancia(xBranca, yBranca, xOutra, yOutra);

            if (dist < menor) {
                menor = dist;
                posicaoMenor = i + 1;
            }
        }

        printf("%d\n", posicaoMenor);

        testes--;
    }
    
    return 0;
}