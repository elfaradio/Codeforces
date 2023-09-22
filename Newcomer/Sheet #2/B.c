#include <stdio.h>

int main()
{
    int a,x=0;
    scanf("%d",&a);
    for(int i=2;i<=a;i+=2)
    {
        printf("%d\n",i);
        x++;
    }
    if(x==0)
        printf("-1\n");

    return 0;
}
