#include <stdio.h>

int my_max(int[], int);

int main(void) {
    int a[10];
    for(int i=0; i<10; i++) {
        scanf("%d", &a[i]);
    }
    printf("%d\n", my_max(a, 10));
    return 0;
}

int my_max(int array[], int n) {
    int max=array[0];
    
    for(int i=1; i<n; i++) {
        if(max < array[i]) {
            max = array[i];
        }
    }

    return max;
}