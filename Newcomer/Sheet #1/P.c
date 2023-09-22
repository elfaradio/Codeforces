#include <stdio.h>
int main()
{
    int n,m;
    scanf("%d",&n);
    m = n/1000;
    if(m%2==0)
    {
        printf("EVEN\n");
    }
    else if(m%2!=0) {
        printf("ODD\n");
    }
    return 0;

}
