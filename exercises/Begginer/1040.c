// 1040 - Média 3

#include <stdio.h>

int main(){
    float n1, n2, n3, n4, nExame, media, mediaFinal;

    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    media = (n1*2 + n2*3 + n3*4 + n4) / 10.0;

    printf("Media: %.1f\n", media);

    if (media >= 7){
        printf("Aluno aprovado.\n");
    }else if (media < 5){
        printf("Aluno reprovado.\n");
    }else{
        printf("Aluno em exame.\n");
        scanf("%f", &nExame);
        printf("Nota do exame: %.1f\n", nExame);

        mediaFinal = (nExame + media) / 2;

        if (mediaFinal >= 5){
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n", mediaFinal);
        }else{
            printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n", mediaFinal);
        }
    }
    
    return 0;
}