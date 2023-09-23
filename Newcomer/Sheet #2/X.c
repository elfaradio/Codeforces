#include <stdio.h>
#include <math.h>
int main()
{
    int n,r,x,m,i;
    scanf("%d",&m);
    while(m--)
    {
        scanf("%d",&n);
    int cnt =0;
    while(n>0)
    {
        r=n%2;
        n=n/2;
        if(r==1)
        {
            cnt++;
        }

    }
   x=pow(2,cnt)-1;
   printf("%d\n",x);
    

    }

    
        

    
    
}
