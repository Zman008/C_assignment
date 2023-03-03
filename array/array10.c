#include<stdio.h>

int main() {
    int n, m, count = 0;

    scanf("%d", &n);
    int array[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    scanf("%d", &m);
    int array2[m];
    
    for (int i = 0; i < m; i++) {
        scanf("%d", &array2[i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if(array[i] == array2[j]) {
                printf("%d ", array[i]);
                count++;
                break;
            }
        }
    }

    if (count == 0) {
        printf("Empty Set\n");
    }

    return 0;
}