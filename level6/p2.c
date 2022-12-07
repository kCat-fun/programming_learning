#include <stdio.h>

void print_solve(int[], int);

int main(void) {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    print_solve(a, n);
    return 0;
}

void print_solve(int array[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (array[min] > array[j]) {
                min = j;
            }
        }
        int temp = array[i];
        array[i] = array[min];
        array[min] = temp;
    }

    for (int i = 0; i < n - 1; i++) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[n-1]);
}