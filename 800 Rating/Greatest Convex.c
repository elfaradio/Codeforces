#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x;
        scanf("%d", &x);
        if (x < 0)
        {
            printf("-1\n");
        }
        else
        {
            printf("%d\n", x - 1);
        }
    }

    return 0;
}
