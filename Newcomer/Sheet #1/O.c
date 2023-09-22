#include<stdio.h>

int main()
{
    int a,b,c;
    char ch;

    scanf("%d %c %d",&a,&ch,&b);

    if(ch=='+')
        c = a+b;
    else if(ch=='-')
        c = a-b;
    else if(ch=='*')
        c = a*b;
    else if(ch=='/')
        c = a/b;

    printf("%d\n",c);

    return 0;
}
