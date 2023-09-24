#include <stdio.h>

int print(int size)
{
    int cnt = 0;
    for (int i = 0; i < size; i++)
    {
        int n;
        scanf("%d", &n);
        if (n == 0)
        {
            cnt++;
        }
        else
        {
            printf("%d ", n);
        }
    }
    return cnt;
}

int main()
{
    int size;
    scanf("%d", &size);
    int zeros = print(size);

    for (int i = 0; i < zeros; i++)
    {
        printf("0 ");
    }

    return 0;
}
