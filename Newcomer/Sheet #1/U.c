#include <stdio.h>
int main()
{
    int x;
    double d,rest;
    scanf("%lf",&d);
    x=d;
    rest=d-x;
    if(rest == 0)
    {
        printf("int %d\n",x);
    }
    else {
        printf("float %d %.3lf\n",x,rest);
    }
    return 0;
}
