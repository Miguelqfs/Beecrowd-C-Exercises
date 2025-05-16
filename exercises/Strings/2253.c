// 2253 - Validador de Senhas

#include <stdio.h>

int SenhaValida(const char *senha){
    int maiuscula = 0, minuscula = 0, numero = 0, tamanho = 0;

    for (int i = 0; senha[i] != '\0'; i++){
        tamanho++;

        if (senha[i] >= 'a' && senha[i] <= 'z'){
            minuscula = 1;
        }else if (senha[i] >= 'A' && senha[i] <= 'Z'){
            maiuscula = 1;
        }else if (senha[i] >= '0' && senha[i] <= '9'){
            numero = 1;
        }else{
            return 0;
        }
    }

    if (tamanho < 6 || tamanho > 32){
        return 0;
    }

    return maiuscula && minuscula && numero;
}

int main(){
    char senha[100];

    while (fgets(senha, 100, stdin) != NULL){

        for (int i = 0; senha[i] != '\0'; i++){
           if (senha[i] == '\n'){
            senha[i] = '\0';
            break;
           }
        }

        if (SenhaValida(senha)){
            printf("Senha valida.\n");
        }else{
            printf("Senha invalida.\n");
        }
    }

    return 0;
}