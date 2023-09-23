#include <stdio.h>

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    char A[101][101];

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            scanf(" %c", &A[i][j]);
        }
    }

    int x, y;
    scanf("%d %d", &x, &y);

    if (A[x][y - 1] != '.' &&
        A[x][y + 1] != '.' &&
        A[x - 1][y] != '.' &&
        A[x + 1][y] != '.' &&
        A[x - 1][y - 1] != '.' &&
        A[x - 1][y + 1] != '.' &&
        A[x + 1][y - 1] != '.' &&
        A[x + 1][y + 1] != '.')
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }

    return 0;
}
