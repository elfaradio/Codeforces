#include <stdio.h>

void print(int num)
{
    for (int i = 1; i <= num; i++)
    {
        if (i != 1)
        {
            printf(" ");
        }
        printf("%d", i);
    }
}

int main()
{
    int num1;
    scanf("%d", &num1);
    print(num1);
    return 0;
}
