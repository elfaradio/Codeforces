#include <stdio.h>

int main()
{
    int k, n, w;
    scanf("%d %d %d", &k, &n, &w);
    int i;
    int sum = 0;

   
    for (i = 1; i <= w; i++)
    {
        sum = sum + (i * k);
    }

    
    int borrow = sum - n;

    if (borrow > 0)
    {
        printf("%d\n", borrow);
    }
    else
    {
        printf("0\n");
    }

    return 0;
}
