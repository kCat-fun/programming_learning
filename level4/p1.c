#include <stdio.h>

int main(void) {
    int n, i;
    scanf("%d", &n);
    for(i=1; i<n; i+=2) {
        printf("%d ", i);
    }
    if(i <= n ) {
        printf("%d\n", i);
    }
    else {
        printf("\n");
    }
    return 0;
}