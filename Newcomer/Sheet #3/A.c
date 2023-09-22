#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     long long sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("%lld\n",abs(sum));
}
