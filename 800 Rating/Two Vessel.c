#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int a, b, c, x, y, cnt;
        scanf("%d %d %d", &a, &b, &c);
        x = (a > b) ? a : b;
        y = (a < b) ? a : b;
        cnt = 0;

        while (x > y)
        {
            cnt++;
            x = x - c; 
            y = y + c;
        }
        printf("%d\n", cnt);
    }

    return 0;
}
