#include <stdio.h>

int main()
{
    int n, result = 0;
    scanf("%d", &n);

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0){
            printf("Not Prime\n");
            goto HERE;
        }
    }

    printf("Prime\n");

    HERE:

    return 0;
}