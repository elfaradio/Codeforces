#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        char s[n];
        scanf("%s", s);
        char max = s[0];
        for (int i = 0; i < n; i++)
        {
            if (s[i] > max)
            {
                max = s[i];
            }
        }
        printf("%d\n", max - 96);
    }
    return 0;
}
