#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int i;
        long long int x, sum, cnt = 0;
        scanf("%lld", &x);

        for ( i = 1; i <= 9; i++)
        {
            sum = i;
            while (sum <= x)
            {
                cnt++;
                sum = sum * 10 + i;
            }
        }

        printf("%lld\n", cnt);
    }

    return 0;
}
