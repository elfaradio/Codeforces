#include <stdio.h>
int main()
{
    int a,b,c,e;
    long long int d;
    scanf("%d %d",&a,&b);
    c = a+b;
    d = (long long int)a*b;
    e = a-b;

    printf("%d + %d = %d\n",a,b,c);
    printf("%d * %d = %lld\n",a,b,d);
    printf("%d - %d = %d\n",a,b,e);

    return 0;

}
