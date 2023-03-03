#include <stdio.h>

int factorial(int num) {
    int fact = 1;
    for(int i = 1; i <= num; i++){
        fact *= i;
    }
    return fact;
}

int main()
{
    int n, r, result;
    scanf("%d %d", &n, &r);

    result = factorial(n);
    result /= factorial(r);
    result /= factorial(n - r);

    printf("%d\n", result);

    return 0;
}