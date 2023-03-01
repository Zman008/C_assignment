#include<stdio.h>

int main() {
    int n, m;

    scanf("%d", &n);
    int array1[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &array1[i]);
    }

    scanf("%d", &m);
    int array2[m];
    
    for (int i = 0; i < m; i++) {
        scanf("%d", &array2[i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (array1[i] == array2[j]){
                goto HERE;
            }
        }
        
        printf("%d ", array1[i]);
        HERE:
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (array1[j] == array2[i]){
                goto HERE2;
            }
        }
        
        printf("%d ", array2[i]);
        HERE2:
    }

    return 0;
}