#include<stdio.h>
int main()
{
    int n;

    scanf("%d",&n);

    for(int i=1;i<=n;i+=1)
    {
        for(int j=n;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
