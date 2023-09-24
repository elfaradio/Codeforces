#include <stdio.h>
#include <string.h>

int main()
{
    char x[21], y[21];
    scanf("%s %s", x, y);

    int compare = strcmp(x, y);

    if (compare < 0)
    {
        printf("%s\n", x);
    }
    else if (compare > 0)
    {
        printf("%s\n", y);
    }
    else
    {
        printf("%s\n", x); 
    }

    return 0;
}
