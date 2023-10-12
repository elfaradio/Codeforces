#include <stdio.h>
#include <string.h>
int main()
{
    char s[10001];
    gets(s);
    char sub[] = "hello";
    int i = 0;
    int j = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == sub[j])
        {
            j++;
        }
    }
    if (j == 5)
    {

        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}
