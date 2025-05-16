//Beecrowd 2137 | A Biblioteca do Senhor Severino

#include <stdio.h>
#include <string.h>

int main(void){
    int testes;

    while (scanf("%d", &testes) != EOF){
        
        char numeros[testes][5];

        for (int i = 0; i < testes; i++){
            scanf("%s", numeros[i]);
        }

        for (int i = 0; i < testes - 1; i++){
            for (int j = i + 1; j < testes; j++){
                if (strcmp(numeros[i], numeros[j]) > 0){
                    char temp[5];
                    strcpy(temp, numeros[i]);
                    strcpy(numeros[i], numeros[j]);
                    strcpy(numeros[j], temp);
                }
            }
        }

        for (int i = 0; i < testes; i++){
            printf("%s\n", numeros[i]);
        }
    }

    return 0;
}
