#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int A[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    int img[100001] = {0};

    for (int i = 0; i < n; i++)
    {
        img[A[i]]++;
    }

    for (int i = 1; i <= m; i++)
    {
        printf("%d\n", img[i]);
    }

    return 0;
}
