#include <stdio.h>

int main()
{
    int n, search, count = 0;
    scanf("%d", &n);
    int array[n];

    for (int i = 0; i < n; i++)
    {
        scanf(" %d", &array[i]);
    }

    scanf("%d", &search);

    for (int i = 0; i < n; i++)
    {
        if (array[i] == search)
        {
            printf("FOUND at index position: ");
            count++;
            break;
        }
    }

    if (count != 0)
    {
        for (int i = 0; i < n; i++)
        {

            if (array[i] == search)
            {
                printf("%d", i);

                for (int j = i + 1; j < n; j++)
                {
                    if (array[j] == search)
                    {
                        printf(", ");
                        break;
                    }
                }
            }
        }
        printf("\n");
    }
    else
    {
        printf("NOT FOUND\n");
    }

    return 0;
}