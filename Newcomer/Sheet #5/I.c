#include <stdio.h>

const int s = 500;

void swapRow(int A[s][s], int x, int y, int n)
{
    for (int i = 0; i < n; i++)
    {
        int temp = A[x][i];
        A[x][i] = A[y][i];
        A[y][i] = temp;
    }
}

void swapColumn(int A[s][s], int x, int y, int n)
{
    for (int i = 0; i < n; i++)
    {
        int temp = A[i][x];
        A[i][x] = A[i][y];
        A[i][y] = temp;
    }
}

void print(int A[s][s], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int n, x, y;
    scanf("%d %d %d", &n, &x, &y);
    int A[s][s];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    swapRow(A, x - 1, y - 1, n);
    swapColumn(A, x - 1, y - 1, n);
    print(A, n);

    return 0;
}
