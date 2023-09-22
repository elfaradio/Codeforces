#include <stdio.h>

void checkPrimeNumber(int n);

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int n;
        scanf("%d", &n);
        checkPrimeNumber(n);
    }

    return 0;
}

void checkPrimeNumber(int n)
{
    int i, flag = 0;

    // 0 and 1 are not prime numbers
    if (n == 0 || n == 1)
        flag = 1;

    for (i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
        printf("NO\n");
    else
        printf("YES\n");
}
