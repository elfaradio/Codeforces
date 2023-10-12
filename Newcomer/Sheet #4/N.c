#include <stdio.h>
int main()
{

    int n;
    scanf("%d\n", &n);
    char s[100001];
    gets(s);
    int i, cnt = 0;
    char temp;

    for (i = 0; i < n; i++)
    {
        if (i == 0)
        {
            temp = s[i];
            cnt++;
        }

        else
        {
            if (s[i] != temp)
            {
                cnt++;
                temp = s[i];
            }
        }
    }
    printf("%d", cnt);
}
