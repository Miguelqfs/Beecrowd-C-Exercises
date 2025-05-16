// 1009 - Salário com Bônus

#include <stdio.h>
 
int main() {
    double salario, vendas, total;
    char nome[20];
    
    scanf("%s", &nome);
    scanf("%lf", &salario);
    scanf("%lf", &vendas);
    
    total = 0.15*vendas + salario;
    
    printf("TOTAL = R$ %.2lf\n", total);
 
    return 0;
}