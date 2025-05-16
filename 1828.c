//Beecrowd 1828 | Bazinga!

#include <stdio.h>
#include <string.h>

int main(){
    int testes, n = 0;
    scanf("%d", &testes);

    while (testes--) {
        n++;

        char str1[9], str2[9];
        scanf("%s %s", str1, str2);

        printf("Caso #%d: ", n);

        if (strcmp(str1, str2) == 0) {
            printf("De novo!\n");
        } else {
            if (strcmp(str1, "pedra") == 0) {
                if (strcmp(str2, "lagarto") == 0 || strcmp(str2, "tesoura") == 0) {
                    printf("Bazinga!\n");
                } else {
                    printf("Raj trapaceou!\n");
                }
            } else if (strcmp(str1, "papel") == 0) {
                if (strcmp(str2, "pedra") == 0 || strcmp(str2, "Spock") == 0) {
                    printf("Bazinga!\n");
                } else {
                    printf("Raj trapaceou!\n");
                }
            } else if (strcmp(str1, "tesoura") == 0) {
                if (strcmp(str2, "papel") == 0 || strcmp(str2, "lagarto") == 0) {
                    printf("Bazinga!\n");
                } else {
                    printf("Raj trapaceou!\n");
                }
            } else if (strcmp(str1, "lagarto") == 0) {
                if (strcmp(str2, "papel") == 0 || strcmp(str2, "Spock") == 0) {
                    printf("Bazinga!\n");
                } else {
                    printf("Raj trapaceou!\n");
                }
            } else if (strcmp(str1, "Spock") == 0) {
                if (strcmp(str2, "tesoura") == 0 || strcmp(str2, "pedra") == 0) {
                    printf("Bazinga!\n");
                } else {
                    printf("Raj trapaceou!\n");
                }
            }
        }
    }

    return 0;
}
