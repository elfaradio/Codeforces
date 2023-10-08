#include <stdio.h>
#include <stdlib.h>

int comp(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int A[n];
        int i;
        for (i = 0; i < n; i++)
        {
            scanf("%d", &A[i]);
        }
        qsort(A, n, sizeof(int), comp);
        int f = 0;

        for (i = 0; i < n - 1; i++)
        {
            if (A[i] == A[i + 1])
            {
                f = 1;
                break;
            }
        }
        if (f == 1)
        {
            printf("NO\n");
        }

        else
        {
            printf("YES\n");
        }
    }
}
