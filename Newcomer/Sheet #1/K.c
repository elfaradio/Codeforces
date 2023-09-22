#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    if((a>=b) && (a>c) && (b>=c))
        printf("%d %d\n",c,a);
    else if((a>b) && (a>=c) && (c>=b))
        printf("%d %d\n",b,a);
    else if((b>c) && (b>=a) && (a>=c))
        printf("%d %d\n",c,b);
    else if((b>a) && (b>=c) && (c>=a))
        printf("%d %d\n",a,b);
    else if((c>=a) && (c>b) && (a>=b))
        printf("%d %d\n",b,c);
    else if((c>a) && (c>=b) && (b>=a))
        printf("%d %d\n",a,c);
    else
         printf("%d %d\n",c,a);

    return 0;
}
