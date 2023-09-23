#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int i,temp,digit,cnt,c=0;
    for(i=a;i<=b;i++)
    {
         temp=i;
        
        while(temp!=0)
        {
            cnt=0;
            
            digit = temp%10;
             temp=temp/10;
             
            if(digit!=7 && digit !=4)
            {
                cnt=1;
                break;
               
            }
        

        }
        if(cnt==0)
            {
                printf("%d ",i);
                c++;
            }

         


    }
    if(c==0)
    {
        printf("-1");
    }


    
    return 0;
}
