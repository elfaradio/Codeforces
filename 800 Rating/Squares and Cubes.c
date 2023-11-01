#include <stdio.h>

#include <math.h>

int main()
{

    int n, i, t, ans = 0;

    scanf("%d", &t);
    for (i = 1; i <= t; i++)
    {

        scanf("%d", &n);
        ans = (int)sqrt(n) + (int)cbrt(n) - (int)(sqrt(cbrt(n)));
        printf("%d\n", ans);
    }

    return 0;
}
