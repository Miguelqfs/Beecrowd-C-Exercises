// 2356 - Bactéria I

#include <stdio.h>
#include <string.h>

int main() {
    char bacteria[102], resistencia[102];

    while (fgets(bacteria, 102, stdin) != NULL) {
        fgets(resistencia, 102, stdin);

        bacteria[strcspn(bacteria, "\n")] = '\0';
        resistencia[strcspn(resistencia, "\n")] = '\0';

        if (strstr(bacteria, resistencia) != NULL) {
            printf("Resistente\n");
        } else {
            printf("Nao resistente\n");
        }
    }

    return 0;
}
