#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        int A[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &A[i]);
        }

       
        for (int i = 0; i < n; i++)
        {
            int max = A[i]; 

            for (int j = i; j < n; j++)
            {
                if (A[j] > max)
                {
                    max = A[j];
                }
                printf("%d ", max); 
            }
        }

        printf("\n"); 
    }

    return 0;
}
