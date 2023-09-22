#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    int A[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    int min = A[0];
    int max = A[0];

    int min_home = 0, max_home = 0;

    for (i = 1; i < n; i++)
    {
        if (A[i] < min)
        {
            min = A[i];
            min_home = i;
        }
        if (A[i] > max)
        {
            max = A[i];
            max_home = i;
        }
    }

    int temp = A[min_home];
    A[min_home] = A[max_home];
    A[max_home] = temp;

    for (i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}
