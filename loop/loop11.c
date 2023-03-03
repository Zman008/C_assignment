#include <stdio.h>
#include <math.h>

int main()
{
    float x, result = 0, p = 1;
    scanf("%f", &x);

    for (int i = 0; i < 20; i++)
    {
        float fact = 1;
        for (int j = 1; j <= p; j++){
            fact *= j;
        }

        result += pow(x, p) / fact * pow(-1, i);

        p +=2;
    }
    printf("%.3f\n", result);

    return 0;
}