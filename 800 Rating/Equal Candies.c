#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n, i;
        scanf("%d", &n);
        int A[10000001], sum = 0;

        for (i = 0; i < n; i++)
        {
            scanf("%d", &A[i]);
        }

        qsort(A, n, sizeof(int), cmpfunc);
        sum = 0;

        for (i = 0; i < n - 1; i++)
        { 
            sum = sum + (A[i + 1] - A[0]);
        }

        printf("%d\n", sum);
    }

    return 0;
}
