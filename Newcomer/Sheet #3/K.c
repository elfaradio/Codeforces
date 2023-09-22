#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    char string[n + 1];
    scanf("%s", string);

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        
        sum += string[i] - '0';
    }

    printf("%d\n", sum);

    return 0;
}
