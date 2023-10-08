#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n, x, y, i;
        scanf("%d\n", &n);

        char s[51];
        gets(s);

        x = 0, y = 0;

        for (i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {
                x--;
            }
            else if (s[i] == 'R')
            {
                x++;
            }
            else if (s[i] == 'U')
            {
                y++;
            }
            else if (s[i] == 'D')
            {
                y--;
            }
            if (x == 1 && y == 1)
            {
                printf("YES\n");
                break;
            }
        }

        if (x != 1 || y != 1)
        {
            printf("NO\n");
        }
    }

    return 0;
}
