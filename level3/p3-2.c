#include <stdio.h>

int main(void) {
    int n, m;
    scanf("%d %d", &n, &m);
    if(1 <= n && n <= 3) {
        m *= (1.0 - (n*0.1));
    }
    printf("%d\n", m);
    return 0;
}