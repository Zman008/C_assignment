#include <stdio.h>

int main() {
    int n, m, l;
    scanf("%d", &n);
    m = n;

    for(int i = 0; i < n; i++)
    {
        for (int j = 1; j < m; j++)
            printf(" ");

        for (int k = 0; k <= i; k++)
        {
            if (k==0)
                l=1;
            else
               l=l*(i-k+1)/k;

            printf("%d ", l);
        }

        m--;
        printf("\n");
    }

    return 0;
}
