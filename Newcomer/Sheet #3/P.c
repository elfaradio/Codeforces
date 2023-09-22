#include <stdio.h>

int main()
{
    int size;
    scanf("%d", &size);
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int result = 0;

    for (int i = 0; i < size; i++)
    {
        int counter = 0;

        if (arr[i] % 2 != 0)
        {
            printf("0\n");
            return 0;
        }

        while (arr[i] % 2 == 0)
        {
            counter++;
            arr[i] /= 2;
        }

        if (i == 0 || counter < result)
        {
            result = counter;
        }
    }

    printf("%d\n", result);

    return 0;
}
