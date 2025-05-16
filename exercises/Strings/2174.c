//Beecrowd 2174 | Coleção de Pomekon

#include <stdio.h>
#include <string.h>

int main(void) {
    int qtPokemons, n = 0;
    scanf("%d", &qtPokemons);

    char pokemons[qtPokemons][1002];
    char strSemRep[qtPokemons][1002];

    for (int i = 0; i < qtPokemons; i++) {
        scanf("%s", pokemons[i]);
    }

    for (int i = 0; i < qtPokemons; i++) {
        int jaExiste = 0;
        for (int j = 0; j < n; j++) {
            if (strcmp(strSemRep[j], pokemons[i]) == 0) {
                jaExiste = 1;
                break;
            }
        }
        if (!jaExiste) {
            strcpy(strSemRep[n], pokemons[i]);
            n++;
        }
    }

    printf("Falta(m) %d pomekon(s).\n", 151 - n);

    return 0;
}