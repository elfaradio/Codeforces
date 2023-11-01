#include <stdio.h>
#include <string.h>

int main()
{
    int t; // Number of test cases
    scanf("%d", &t);

    while (t--)
    {
        int i, j, l, f = 0;
        char str[1000];

        scanf("%s", str);
        l = strlen(str);

        if (l % 2 == 0)
        {
            for (i = 0, j = (l / 2); i < (l / 2); i++, j++)
            {
                if (str[i] != str[j])
                {
                    f = 1;
                    break;
                }
            }
            if (f == 1)
            {
                printf("NO\n");
            }
            else
            {
                printf("YES\n");
            }
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
