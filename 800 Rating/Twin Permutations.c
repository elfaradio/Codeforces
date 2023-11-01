#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[101];
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &a[i]);
        }

        for (int i = 1; i <= n; i++)
        {
            printf("%d ", (n - a[i] + 1));
        }
        printf("\n");
    }
    return 0;
}
