#include <stdio.h>
#include <string.h>
int main()
{
    char S[] = "codeforces";
    int t, i;
    scanf("%d", &t);
    while (t--)
    {

        char ch;
        scanf(" %c", &ch);
        int l = strlen(S);
        int f = 0;
        for (i = 0; i < l; i++)
        {
            if (ch == S[i])
            {
                f = 1;
                break;
            }
        }
        if (f == 1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}
