#include <stdio.h>
#include <string.h>

int main()
{
    char S[1000001];
    gets(S);
    for (int i = 0; S[i] != '\0'; i++)
    {
        if (S[i] == '\\')
        {
            break;
        }
        printf("%c", S[i]);
    }

    return 0;
}
