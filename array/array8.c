#include<stdio.h>

int main() {
    int n, temp;
    scanf("%d", &n);
    int array[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++){
            if (array[j] > array[i]) {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}