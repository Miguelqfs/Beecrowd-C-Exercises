// 1012 - Área

#include <stdio.h>
 
int main() {
    double a, b, c, areaTra, areaTri, areaC, areaQ, areaR;

    scanf("%lf %lf %lf", &a, &b, &c);

    areaC = 3.14159 * c*c;
    areaQ = b*b;
    areaR = a*b;
    areaTri = (a*c)/2;
    areaTra = ((a + b) * c)/2; 

    printf("TRIANGULO: %.3lf\n", areaTri);
    printf("CIRCULO: %.3lf\n", areaC);
    printf("TRAPEZIO: %.3lf\n", areaTra);
    printf("QUADRADO: %.3lf\n", areaQ);
    printf("RETANGULO: %.3lf\n", areaR);

    return 0;
}