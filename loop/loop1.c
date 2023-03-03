#include <stdio.h>

int main()
{
    int x, n, guess;
    scanf("%d %d", &x, &n);

    while (n > 0)
    {
        n--;

        scanf("%d", &guess);
        if (guess == x)
        {
            printf("Right, Player-2 wins!\n");
            break;
        }
        else
        {
            printf("Wrong, %d Choice(s) Left!\n", n);
            if (n == 0)
            {
                printf("Player-1 wins!\n");
            }
        }
    }

    return 0;
}