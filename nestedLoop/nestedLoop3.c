#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        for (int l = 1; l <= i; l++)
        {
            if (l < n)
            {
                printf("%d", l);
            }
        }

        for (int k = 0; k < n-i; k++)
        {
            printf("_");
        }
        
        for (int j = i; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}