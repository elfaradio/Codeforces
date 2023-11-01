#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int rat;
        scanf("%d", &rat);

        if (rat >= 1900)
        {
            printf("Division 1\n");
        }
        else if (rat >= 1600)
        {
            printf("Division 2\n");
        }
        else if (rat >= 1400)
        {
            printf("Division 3\n");
        }
        else
        {
            printf("Division 4\n");
        }
    }

    return 0;
}
