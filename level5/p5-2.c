#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int a[n], b[n];

    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    for(int i=0; i<n; i++) {
        scanf("%d", &b[i]);
    }

    for(int i=0; i<n-1; i++) {
        printf("%d ", a[i]+b[i]);
    }
    printf("%d\n", a[n-1]+b[n-1]);

    return 0;
}