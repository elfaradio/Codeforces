#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    int i, n;
    scanf("%d", &n);
    int A[n], B[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    for (i = 0; i < n; i++)
    {
        scanf("%d", &B[i]);
    }

    qsort(A, n, sizeof(int), cmpfunc);
    qsort(B, n, sizeof(int), cmpfunc);

    int f = 0;
    for (i = 0; i < n; i++)
    {
        if (A[i] == B[i])
        {
            f++;
        }
    }

    if (f == n)
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }

    return 0;
}
