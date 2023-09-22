#include <stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z')
    {
      printf("ALPHA\nIS CAPITAL\n");
    }

    else if(ch>='a' && ch<='z')
    {
      printf("ALPHA\nIS SMALL\n");
    }

    else
    {
      printf("IS DIGIT\n");
    }

    return 0;

}
