#include <stdio.h>

int main() {
    char x;
    int i = 1;
    while (x != 'A') {
        scanf(" %c", &x);
        printf("Input %d: %c\n", i, x);
        i++;
    }

    return 0;
}