#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int A[n];
    for(i=0; i<n ; ++i)
    {
        scanf("%d",&A[i]);
    }
    int min=A[0];
    for(i=0;i<n;i++)
    {
        if(A[i]<min)
        {
            min=A[i];
        }
    }
    int cnt=0;
    for(i=0;i<n;i++)
    {
        if(A[i]==min)
        {
            cnt++;

        }
        
    }
    if(cnt%2==0)
    {
        printf("Unlucky");
    }
    else {
        printf("Lucky");
    }
}
