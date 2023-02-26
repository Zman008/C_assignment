#include<stdio.h>

int main() {
    int n, num, sum = 0;
    scanf("%d", &n);
    int array[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        array[i] = num;
    }

    for (int i = 0; i < n; i+=2) {
        sum += array[i];
    }

    printf("%d\n", sum);

    return 0;
}