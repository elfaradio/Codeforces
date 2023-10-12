#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000005];
    gets(s);

    int l = strlen(s);
    int init = 0;

    for (int i = 0; i <= l; i++)
    {
        if (s[i] == ' ' || s[i] == '\0')
        {

            for (int j = i - 1; j >= init; j--)
            {
                printf("%c", s[j]);
            }
            if (s[i] == ' ')
            {
                printf(" ");
            }
            init = i + 1;
        }
    }

    return 0;
}
