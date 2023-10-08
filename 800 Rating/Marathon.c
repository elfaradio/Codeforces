#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);

        int win = 0;

        if (a < b)
            win++;
        if (a < c)
            win++;
        if (a < d)
            win++;

        printf("%d\n", win);
    }

    return 0;
}
