#include <stdio.h>


int main()
{
    int n, result = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        result += i * i * (i+1);
    }
    printf("Result: %d\n", result);

    return 0;
}