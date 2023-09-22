#include <stdio.h>
int main()
{
    int n,i,j,f;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     i=0,j=n-1,f=1;
    for(i=0;i<=j;i++,j--)
    {
        if(a[i]!=a[j])
        {
            printf("NO\n");
            f=0;
            break;
            
        }
    
    }
    if(f==1)
    {
        printf("YES\n");
    }
    
    
}
