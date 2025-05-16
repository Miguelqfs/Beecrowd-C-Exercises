// 2242 - Huaauhahhuahau

#include <stdio.h>

int main(){
    char r[52];
    char vogais[52];
    int tamanhoVogais = 0, indiceVogais = 0;

    fgets(r, 52, stdin);

    for (int i = 0; r[i] != '\0'; i++){
        if (r[i] == 'a' || r[i] == 'e' || r[i] == 'i' || r[i] == 'o' || r[i] == 'u'){
            vogais[indiceVogais] = r[i];
            indiceVogais++;
            tamanhoVogais++;
        }
    }
    if (tamanhoVogais == 1){
        printf("S\n");
        return 0;
    }
    
    vogais[indiceVogais] = '\0';

    int metadeVogais = tamanhoVogais/2;

    for (int i = 0; i < metadeVogais; i++){
        if (vogais[i] == vogais[tamanhoVogais - i - 1]){
            continue;
        }else{
            printf("N\n");
            return 0;
        }
    }
    printf("S\n");

    return 0;
}