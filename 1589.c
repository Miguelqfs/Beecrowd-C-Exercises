// 1589 - Bob Conduite

#include <stdio.h>
 
int main() {
    
    int t,r1,r2,r3;

    scanf("%d", &t);

    while (t>0)
    {
        t-=1;
        
        scanf("%d %d", &r1, &r2);

        r3 = r1+r2;

        printf("%d\n", r3);
    }

    return 0;
}