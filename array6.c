#include <stdio.h>

int exchange(int arrayA[], int arrayB[], int n, int m)
{
    int temp;

    for (int i = 0; i < n; i++)
    {
        printf("A:%d B:%d\n", arrayA[i], arrayB[i]);
        temp = arrayA[i];
        arrayA[i] = arrayB[i];
        arrayB[i] = temp;
        printf("a:%d b:%d\n", arrayA[i], arrayB[i]);
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
    int arrayA[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arrayA[i]);
    }

    scanf("%d", &m);
    int arrayB[m];

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arrayB[i]);
    }

    if (n > m) 
    {
        exchange(arrayA, arrayB, n, m);
    } else 
    {
        exchange(arrayA, arrayB, m, n);
    }

    return 0;
}