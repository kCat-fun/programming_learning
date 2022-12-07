#include <stdio.h>

int main(void) {
    int num[99];
    for (int i = 2, j = 0; j < 99; i++, j++) {
        num[j] = i;
    }

    int remain = 99, n = 0;
    while (1) {
        int remain_temp = remain;
        int num_temp[99];

        for (int i = 0; i < 99; i++) {
            num_temp[i] = -1;
        }
        for (int i = n + 1; i < remain; i++) {
            if (num[i] % num[n] == 0) {
                num[i] = -1;
                remain_temp--;
            }
        }

        for (int i = 0, j = 0; i < 99; i++) {
            if (num[i] != -1) {
                num_temp[j] = num[i];
                j++;
            }
        }

        for (int i = 0; i < 99; i++) {
            num[i] = num_temp[i];
        }

        n++;
        if (num[n] == -1) break;
    }

    for (int i = 0; i < n; i++) {
        printf("%3d", num[i]);
        if ((i + 1) % 10 == 0) {
            printf("\n");
        }
    }
    printf("\n");

    return 0;
}