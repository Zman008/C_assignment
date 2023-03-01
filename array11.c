#include<stdio.h>

int main() {
    int n, m;

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
            if (array[i] == array2[j]){
                goto HERE;
            }
        }
        
        printf("%d ", array[i]);
        HERE:
    }

    for (int i = 0; i < m; i++) {
        printf("%d ", array2[i]);
    }

    return 0;
}