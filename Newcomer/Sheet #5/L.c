#include <stdio.h>



void print(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
   
}

int main()
{
    int n;
    scanf("%d", &n);
    int A2[n];
    int B[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A2[i]);
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &B[i]);
    }

    print(B, n);
    print(A2, n);

    return 0;
}
