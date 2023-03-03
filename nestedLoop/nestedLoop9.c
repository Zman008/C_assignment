#include <stdio.h>

int main()
{
    int n, k = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (i%2 == 0)
            {
                k++;
                (k > 9)?printf("%d ", k):printf("%d  ", k);
            } else {
                if (j == 0)
                {
                    k = i + 1 + k;
                }

                (k > 9)?printf("%d ", k):printf("%d  ", k);
                k--;

                if (j == i)
                {
                    k = i + 1 + k;
                }
            }
        }
        printf("\n");
    }

    return 0;
}