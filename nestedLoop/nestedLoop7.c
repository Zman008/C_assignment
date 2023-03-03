#include <stdio.h>

int main()
{
    int n, k = 0;
    scanf("%d", &n);

    for (int i = 0; (i < n && i >= 0); i)
    {
        if (i == n/2)
        {
            for (int j = 0; j < n; j++)
            {
                printf("$");
            }
            goto HERE;
        }

        for (int j = 0; j < n; j++)
        {
            if (j == n/2 || j == n/2 + i || j == n/2 - i)
            {
                printf("$");
            }
            else
            {
                printf("_");
            }
        }

        HERE:
        printf("\n");
        
        if(k < n/2)
        {
        i++;
        }
        else i--;

        k++;
    }

    return 0;
}