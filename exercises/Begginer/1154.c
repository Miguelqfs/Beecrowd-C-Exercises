// 1154 - Idades

#include <stdio.h>

int main() {
    int idade, soma=0, contador=0;
    double media;
    
    scanf("%d",&idade);

    while(idade>=0){
        contador+=1;
        soma= soma + idade;
        scanf("%d",&idade);
    }
    media=1.0*soma/contador;

    printf("%.2f\n", media);

    return 0;
}