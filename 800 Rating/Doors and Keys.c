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
        int r = 0, g = 0, b = 0;
        int f = 1;

        for (int i = 0; i < 6; i++)
        {
            if (s[i] == 'r')
                r = 1;
            else if (s[i] == 'g')
                g = 1;
            else if (s[i] == 'b')
                b = 1;
            else if (s[i] == 'R')
            {
                if (r == 1)
                {
                    f = 1;
                }
                else
                {
                    f = 0;
                    break;
                }
            }
            else if (s[i] == 'B')
            {
                if (b == 1)
                {
                    f = 1;
                }
                else
                {
                    f = 0;
                    break;
                }
            }
            else if (s[i] == 'G')
            {
                if (g == 1)
                {
                    f = 1;
                }
                else
                {
                    f = 0;
                    break;
                }
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

    return 0;
}
