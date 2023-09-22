#include <stdio.h>
int main()
{
    int n,i,temp,j;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; ++i)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)// n-1 bcz sesher duita compare korbe 
    {
        for(int j=0;j<n-i-1;j++) {
            if (a[j]>a[j+1]) // if condition 
            {
                 temp=a[j];
         a[j]=a[j+1];
         a[j+1]=temp;

            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }


}
