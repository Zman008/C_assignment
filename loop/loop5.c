#include <stdio.h>


int main()
{
    int n, temp, p = 0, q = 1;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        temp = q;
        q += p;
        p = temp;
        printf("%d", p);
        if (i != n){
            printf(", ");
        }
    }

    return 0;
}