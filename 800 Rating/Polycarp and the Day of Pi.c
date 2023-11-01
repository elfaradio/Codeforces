#include <stdio.h>
#include <string.h>

int main()
{
    int t, i, cnt, l;
    scanf("%d", &t);

    while (t--)
    {
        char s[31];
        scanf("%s", s);

        char pi[] = "314159265358979323846264338327";

        cnt = 0;
        l = strlen(s);

        for ( i = 0; i < l; i++)
        {
            if (s[i] == pi[i])
            {
                cnt++;
            }
            else
            {
                break; 
            }
        }

        printf("%d\n", cnt);
    }

    return 0;
}
