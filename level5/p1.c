#include <stdio.h>

int main(void) {
    int a[10];
    
    for(int i=0; i<10; i++) {
        scanf("%d", &a[i]);
        a[i] *= -1;
    }
    
    for(int i=9; i>0; i--) {
        printf("%d ",a[i]);
    }
    printf("%d\n",a[0]);

    return 0;
}