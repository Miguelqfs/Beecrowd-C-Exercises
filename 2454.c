// 2454 - Flíper

#include <stdio.h>
 
int main(void) {
    int P, R;
    
    scanf("%d",&P);
    scanf("%d",&R);
    
    if(P == 0){
        printf("C\n");
    }else{ if(R==0){
            printf("B\n");
        }else{
            printf("A\n");
        }
    }
    return 0;
}