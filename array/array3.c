#include <stdio.h>

int main() {
    int n, count = 0;
    scanf("%d", &n);
    char array[n];

    for (int i = 0; i < n; i++) {
        scanf(" %c", &array[i]);
    }

    for (int i = 0; i < n; i++) {
        if (array[i] == 'A' || array[i] == 'E' || array[i] == 'I' || array[i] == 'O' || array[i] == 'U') {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}