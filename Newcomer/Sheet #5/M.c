#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int distinct(int A[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] != A[i+1])
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int n;
    scanf("%d", &n);
    int A[n];

    if (n == 0)
    {
        printf("0\n");
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    qsort(A, n, sizeof(int), cmpfunc);

    printf("%d\n", distinct(A, n));

    return 0;
}
