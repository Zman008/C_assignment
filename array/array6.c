#include <stdio.h>

int exchange(int arrayA[], int arrayB[], int n, int m)
{
    int temp, x;

    if (n > m)
    {
        x = n;
    }
    else
    {
        x = m;
    }

    for (int i = 0; i < x; i++)
    {
        temp = arrayA[i];
        arrayA[i] = arrayB[i];
        arrayB[i] = temp;
    }

    printf("Array A: ");

    for (int i = 0; i < m; i++)
    {
        printf("%d ", arrayA[i]);
    }

    printf("\nArray B: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arrayB[i]);
    }

    return 0;
}

int main()
{
    int n, m;
    scanf("%d", &n);
    int arrayA[999];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arrayA[i]);
    }

    scanf("%d", &m);
    int arrayB[999];

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arrayB[i]);
    }

    exchange(arrayA, arrayB, n, m);

    return 0;
}