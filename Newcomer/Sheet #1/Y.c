
#include <stdio.h>

int main()
{

    long long int a,b,c,d,s;

    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);

    a = a%100;
    b = b%100;
    c = c%100;
    d = d%100;

    s = (a*b*c*d)%100;

    if(s<10)
       printf("0%d\n",s);
    else
       printf("%lld\n",s);


    return 0;
}
