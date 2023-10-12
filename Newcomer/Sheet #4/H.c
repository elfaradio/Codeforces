#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        char s[100001];
        scanf("%s", s);
        int l = strlen(s);
        int flag = 0;
        int i = 0;

        while (s[i] != '\0')
        {
            if ((s[i] == '0' && s[i + 1] == '1' && s[i + 2] == '0') ||
                (s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '1'))
            {
                flag = 1;

                break;
            }
            i++;
        }

        if (flag == 1)
        {
            printf("Good\n");
        }
        else
        {
            printf("Bad\n");
        }
    }

    return 0;
}
