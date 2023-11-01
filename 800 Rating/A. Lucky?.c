
#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[7];
        scanf("%s", s);

        if (s[0] + s[1] + s[2] == s[3] + s[4] + s[5])
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
