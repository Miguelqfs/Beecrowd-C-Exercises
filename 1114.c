// 1114 - Senha Fixa

#include <stdio.h>

int main(void) {
    int senha,senhaCorreta=2002;

    scanf("%d", &senha);

    while(senha != senhaCorreta){
        printf("Senha Invalida\n");
        scanf("%d", &senha);
    }
    printf("Acesso Permitido\n");

    return 0;
}
