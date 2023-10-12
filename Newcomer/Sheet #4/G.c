#include <stdio.h>
#include <string.h>

int main()
{
    char s[100005];
    scanf("%s", s);
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == ',')
        {
            printf(" ");
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {

            printf("%c", s[i] - 32);
        }
        else
        {

            printf("%c", s[i] + 32);
        }
    }
    printf("\n");
    return 0;
}
