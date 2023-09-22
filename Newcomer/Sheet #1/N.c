#include <stdio.h>
int main()
{

    char ch;
    scanf("%c",&ch);
    if(ch>='A' && ch<= 'Z')
    {
        int n =  ch+32;
        printf("%c",n);

    }
    else

    {
        int n = ch-32;
        printf("%c\n",n);
    }
    return 0;
}
