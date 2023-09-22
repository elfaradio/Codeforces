#include <stdio.h>
int main()
{
    int x,y,sum,j;
    while(1)
    {
        scanf("%d%D",&x,&y);
        if(x<=0 || y<=0)
        {
            break;
        }
        if(x<y)
        {
            sum=0;
            for(j=x;j<=y;j++)
            {
                sum=sum+j;
                if(j==y)
                {
                    printf("%d sum =%d\n",j,sum);
                }
                else {
                    printf("%d ",j);
                }
            }
        }
        else {
            sum=0;
            for(j=y;j<=x;j++)
            {
                sum=sum+j;
                if(j==x)
                {
                    printf("%d sum =%d\n",j,sum);
                }
                else {
                    printf("%d ",j);
                }
            }
        }
    }
}

