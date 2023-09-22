#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        int x=i;
        int flag=1;
        for(int j=2;j<x;j++)
        {
            if(x%j==0)
            {
                flag=0;
                break;

            }
        }
        if(flag==1)
        {
            printf("%d ",x);
        }
    }
    return 0;
}

