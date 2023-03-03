#include <stdio.h>


int main()
{
    int n, m, lar, smol, temp, GCD, LMC;
    scanf("%d %d", &n, &m);

    if (n > m) {
        lar = n;
        smol = m;
    } else {
        lar = m;
        smol = n;
    }

    while(smol != 0)
    {
        temp = smol;
        smol = lar % smol;
        lar = temp;
        if (smol == 0){
            GCD = lar;
        }
    }

    LMC = n * m / GCD;

    printf("GCD %d\n", GCD); 
    printf("LMC %d\n", LMC); 

    return 0;
}