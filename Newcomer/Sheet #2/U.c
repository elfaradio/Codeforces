#include <stdio.h>

int main() {
    int n, x, y,result,i,sum, b,temp;
    scanf("%d %d %d", &n, &x, &y);
     result =0;
    
       
   for(i=1;i<=n;i++)
   {
    sum=0;
    
    
    temp=i;
    while(temp>0)
    {
        
         
        b=temp%10;
        temp=temp/10;
        sum=sum+b;


    }
   
    if(sum >=x && sum<=y)
    {
     
        result=result+i;

    }
    

   }
   printf("%d\n",result);
    
     
}
