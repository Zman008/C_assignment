#include <stdio.h>
#include <math.h>

int main()
{
    int n, num, result = 0;
    scanf("%d", &n);
    
    for (int j = 1; j <= n; j++)
    {    
        num = 0;
        for (int i = 1; i <= j; i++)
        {
            num += i * pow(10, j-i);
        }

        result += num;
    
    }

    printf("%d\n", result);

    return 0;
}