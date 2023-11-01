#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        char s[2001];
        scanf("%s", s);
        int cnt = n;
        int i = 0, j = n - 1;
        while (i < j && s[i] != s[j])
        { 
            i++;
            j--;
            cnt -= 2;
        }
        printf("%d\n", cnt);
    }
    return 0;
}
