// Beecrowd 1551 | Frase Completa

#include <stdio.h>

int ClassificaFrase(char *frase){
    int contagem[26] = {0};
    int cont = 0;
    int indice;

    for (int i = 0; frase[i] != '\0'; i++) {

        if (frase[i] >= 'a' && frase[i] <= 'z') {
            indice = frase[i] - 'a';

            if (contagem[indice] == 0) {
                contagem[indice] = 1; 
                cont++; 
            }   
        }
    }

    if (cont == 26){
        return 1;
    }else if (cont >= 13){
        return 2;
    }else return 0;
    
}

void RetiraCaracteres(char *frase){
    int i, j = 0;

    for (i = 0; frase[i] != '\0'; i++) {

        if (frase[i] >= 'a' && frase[i] <= 'z') {
            frase[j] = frase[i];
            j++;
        }
    }

    frase[j] = '\0'; 
}

int main(){
    int n;
    char frase[1002];

    scanf("%d", &n);
    getchar();

    while (n--){
        fgets(frase, 1002, stdin);

        RetiraCaracteres(frase);

        switch (ClassificaFrase(frase))
        {
        case 0:
            printf("frase mal elaborada\n");
            break;
        case 1:
            printf("frase completa\n");
            break;
        case 2:
            printf("frase quase completa\n");
            break;
        }

    }
    

    return 0;
}