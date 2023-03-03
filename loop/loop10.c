#include <stdio.h>
#include <math.h>

int main()
{
    int num, numCp, revNum = 0, digits, lastDig;
    scanf("%d", &num);

    numCp = num;
    digits = log10(num);

    while (numCp > 0) {
        lastDig = numCp % 10;
        numCp /= 10;
        revNum += lastDig * pow(10, digits);
        digits--;
    }
    
    if (revNum == num){
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}