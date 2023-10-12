#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000005];
    scanf("%s", s);

    int i = 0;
    long long int sum = 0;

    while (s[i] != '\0')
    {
        sum = sum + (s[i] - '0');
        i++;
    }

    printf("%lld\n", sum);
    return 0;
}
