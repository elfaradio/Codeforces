#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[10000001];
    int i, j, cnt;

    scanf("%s", s);

    int img[26] = {0};

    for (i = 0; s[i] != '\0'; i++)
    {
        img[s[i] - 'a']++;
    }

    for (i = 0; i < 26; i++)
    {
        if (img[i] > 0)
        {
            printf("%c : %d\n", i + 'a', img[i]);
        }
    }

    return 0;
}
