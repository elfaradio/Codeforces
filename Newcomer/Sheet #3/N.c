#include <stdio.h>
#include <string.h>

int main()
{
    int A, B; // 3 3
    scanf("%d%d", &A, &B);
    char code[100];
    scanf("%s", code);

    if (code[A] != '-')
    {
        printf("No\n");
        return 0;
    }
    int f = 0;
    for (int i = 0; i < strlen(code); i++)
    {
        if (code[i] >= 48 && code[i] <= 57)
        {
            f++;
        }
    }
    if (f == A + B)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}
