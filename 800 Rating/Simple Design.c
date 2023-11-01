#include <stdio.h>

int main()
{
    int t, x, k;
    scanf("%d", &t);

    while (t--)
    {

        scanf("%d %d", &x, &k);

        int y = x;
        while (1)
        {
            int sum = 0;
            int temp = y;
            while (temp > 0)
            {
                sum += temp % 10;
                temp /= 10;
            }

            if (sum % k == 0)
            {
                printf("%d\n", y);
                break;
            }
            y++;
        }
    }

    return 0;
}
