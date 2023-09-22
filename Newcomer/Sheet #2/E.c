#include <stdio.h>
int main()
{
    int n,x,mx,i;

    scanf("%d",&n);
    mx=0;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        if(x>mx)
        {
             mx=x;


        }



    }
    printf("%d\n",mx);
    return 0;
}
