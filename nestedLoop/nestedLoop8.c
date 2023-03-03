#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        if (i == n/2)
        {
            for (int k = 0; k < n; k++)
            {
                printf("H ");
            }
        }
        else 
        {
            for (int k = 0; k < n; k++)
            {
                if (k == 0 || k == n-1)
                {
                    printf("H ");
                } else printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}