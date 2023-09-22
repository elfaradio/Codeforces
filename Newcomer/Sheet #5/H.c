#include <stdio.h>
void Ntimes(int n, char c);
int main()
{
    int t;
    scanf("%d", &t);
    int n;
    char c;
    while (t--)
    {
        scanf("%d %c", &n, &c);
        Ntimes(n, c);
    }
}
void Ntimes(int n, char c)
{
    int i = 0;
    for (i = 1; i <= n; i++)
    {
        printf("%c ", c);
    }
    printf("\n");
}
