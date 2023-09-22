#include<stdio.h>
int main()
{
    int n,i,sum=0,r,x;
    
    scanf("%d",&x);
    
    n = x;
    
    while(1)
    {
      r = n%10;
      n = n/10;
      sum = sum + r;
      if(n==0)
          break;
      sum = sum * 10;
      
    }
    printf("%d\n",sum);
    
    if(sum==x)
       printf("YES\n");
    else
       printf("NO\n");
    
    return 0;
}
