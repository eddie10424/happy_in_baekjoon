#include <stdio.h>

int main(void){
    int i= 1, dan;
    
    scanf("%d", &dan);
    
    while (i < 10) {
        printf("%d * %d = %d\n",dan,i,dan * i);
        
        i += 1;
    }
    return 0;
}
