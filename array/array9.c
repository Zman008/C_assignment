#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int array[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++){
            if (array[j] == array[i]) {
                int x = j;
                
                for(x; x < n; x++){
                    array[x] = array[x + 1];
                }

                n--;
                j--;
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}