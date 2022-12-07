#include <stdio.h>

void split_print(char[]);

int main(void) {
    char str[101];
    scanf("%s", str);
    split_print(str);
    return 0;
}

void split_print(char str[]) {
    char split_str[100][101];
    int n=0, count=0;
    for(int i=0; str[i]; i++) {
        if(str[i] == '.') {
            n++;
            count=0;
        }
        else {
            split_str[n][count] = str[i]; 
            count++;
        }
    }
    for(int i=n; i > 0; i--) {
        printf("%s ", split_str[i]);
    }
    printf("%s\n", split_str[0]);
}