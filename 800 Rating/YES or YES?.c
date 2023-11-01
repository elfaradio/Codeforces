#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int t, i;
    scanf("%d", &t);

    while (t--)
    {
        char s[4];
        scanf("%s", s);

        for (i = 0; i < 3; i++)
        {
            s[i] = toupper(s[i]);
        }

        if (strcmp(s, "YES") == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
