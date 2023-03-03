#include <stdio.h>

int main() {
    int n, m;
    scanf("%d", &n);
    m = n;

    for(int i = 1; i <= n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            printf(" ");
        }

        for (int k = 0; k < i; k++)
        {
            printf("%d ", m);
        }

        m--;
        printf("\n");
    }

    return 0;
}
