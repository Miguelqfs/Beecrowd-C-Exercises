// 2221 - Batalha de Pomekons

#include <stdio.h>
 
float ValorGolpe(int ataque, int defesa, int level, int bonus){
    float golpe;

    if (level % 2 == 0){
        golpe = (ataque + defesa) / 2 + bonus;
    }else{
        golpe = (ataque + defesa) / 2;
    }

    return golpe;
}

int main() {
    int n_testes, bonus, ataque, defesa, level;
    float guarte, dabriel;

    scanf("%d", &n_testes);

    for (int i = 0; i < n_testes; i++){
        scanf("%d", &bonus);

        scanf("%d %d %d", &ataque, &defesa, &level);
        dabriel = ValorGolpe(ataque, defesa, level, bonus);

        scanf("%d %d %d", &ataque, &defesa, &level);
        guarte = ValorGolpe(ataque, defesa, level, bonus);

        if (dabriel > guarte){
            printf("Dabriel\n");
        }else if (guarte > dabriel){
            printf("Guarte\n");
        }else{
            printf("Empate\n");
        }
    }

    return 0;
}