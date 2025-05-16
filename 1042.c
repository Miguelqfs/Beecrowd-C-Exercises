// 1042 - Sort Simples

#include <stdio.h>
#include <string.h>
 
int main() {
    int n1, n2, n3, temp, seq[3], old[3];

    scanf("%d %d %d", &n1, &n2, &n3);

    seq[0] = n1;
    seq[1] = n2;
    seq[2] = n3;

    for (int i = 0; i < 3; i++){
        old[i] = seq[i];
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2 - i; j++) {
            if (seq[j] > seq[j + 1]) {
                temp = seq[j];
                seq[j] = seq[j + 1];
                seq[j + 1] = temp;
            }
        }
    }
    
    for (int i = 0; i < 3; i++){
        printf("%d\n", seq[i]);
    }
    
    puts("");

    for (int i = 0; i < 3; i++){
        printf("%d\n", old[i]);
    }
    
    return 0;
}