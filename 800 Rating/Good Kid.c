#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n, i, j;
        int product = 1;
        scanf("%d", &n);
        int A[n];
        for (i = 0; i < n; i++)
        {
            scanf("%d", &A[i]);
        }

        for (i = 0; i < n - 1; i++)
        {
            for (j = 0; j < n - i - 1; j++)
            {
                if (A[j] > A[j + 1])
                {
                    int temp = A[j];
                    A[j] = A[j + 1];
                    A[j + 1] = temp;
                }
            }
        }
        A[0] = A[0] + 1;

        for (i = 0; i < n; i++)
        {
            product = product * A[i];
        }

        printf("%d\n", product);
    }

    return 0;
}
