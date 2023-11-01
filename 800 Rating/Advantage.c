#include <stdio.h>

int main()
{
    long long int t;
    scanf("%lld", &t);

    while (t--)
    {
        long long int n, temp, i, j, k, m1, m2;

        scanf("%lld", &n);

        long long int a[n + 1], b[n + 1];

        for (i = 0; i< n; i++)
        {
            scanf("%lld", &a[i]);
            b[i] = a[i];
        }

        for (i = 0; i < n; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (a[i] < a[j])
                {
                    temp = a[j];
                    a[j] = a[i];
                    a[i] = temp;
                }
            }
            if (i == 1)
                break;
        }
        m1 = a[0];
        m2 = a[1];

        for (i = 0; i < n; i++)
        {
            if (b[i] < m1)
                printf("%lld ", b[i] - m1);
            else if (b[i] == m1)
                printf("%lld ", m1 - m2);
        }
        printf("\n");
    }
    return 0;
}
