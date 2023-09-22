#include <stdio.h>

void bubbleSort(int A[], int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (A[j] > A[j + 1])
            {
                // Swap A[j] and A[j+1]
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int size;
    scanf("%d", &size);
    int A[size];

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &A[i]);
    }

    bubbleSort(A, size);

    printf("%d %d\n", A[0], A[size - 1]);

    return 0;
}
