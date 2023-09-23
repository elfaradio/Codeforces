#include <stdio.h>

int main()
{
    int solve = 0;
    int n, k;
    scanf("%d %d", &n, &k);
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum = (i * 5) + sum;
        if (sum <= 240 - k)
        {
            solve++;
        }
    }

    printf("%d\n", solve);

    return 0;
}
