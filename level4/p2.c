#include <stdio.h>

int main(void) {
    for(int i=1; i<=100; i++) {
        if(i%3 == 0 && i%5 == 0) {
            printf("hizzbuzz\n");
        }
        else if(i%3 == 0) {
            printf("hizz\n");
        }
        else if(i%5 == 0) {
            printf("buzz\n");
        }
        else {
            printf("%d\n", i);
        }
    }
    return 0;
}