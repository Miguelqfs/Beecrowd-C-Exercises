// 1074 - Par ou Ímpar

#include <stdio.h>

int main(void){

    int n,x;

    scanf("%d", &n);

    while(n!=0){
        scanf("%d", &x);
        n-=1;

        if(x==0){
            printf("NULL\n");
        }else if((x%2) == 0){
            if(x>0)
                printf("EVEN POSITIVE\n");
            if(x<0)
                printf("EVEN NEGATIVE\n");
        }else if((x%2) != 0){
            if(x>0)
                printf("ODD POSITIVE\n");
            if(x<0)
                printf("ODD NEGATIVE\n");
        }
        }
    return 0;
}
