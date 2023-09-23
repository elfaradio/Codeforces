#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a = 0, b = 1;

    if (n == 1)
    {
        printf("%d\n", a);
    }
    else if (n == 2)
    {
        printf("%d %d\n", a, b);
    }
    else
    {
        printf("%d %d ", a, b);
        for (int i = 2; i < n; i++)
        {
            int c = a + b;
            printf("%d ", c);
            a = b;
            b = c;
        }
        printf("\n");
    }

    return 0;
}
