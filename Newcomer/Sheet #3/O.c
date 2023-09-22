#include <stdio.h>

int main()
{
    long long position; // 5
    scanf("%lld", &position);
    long long a = 0;
    long long b = 1;

    if (position == 1)
    {
        printf("%lld\n", a);
    }
    else if (position == 2)
    {
        printf("%lld\n", b);
    }
    else
    {
        for (int i = 3; i <= position; i++)
        {
            long long c = a + b;
            a = b;
            b = c;
        }
        printf("%lld\n", b);
    }

    return 0;
}
