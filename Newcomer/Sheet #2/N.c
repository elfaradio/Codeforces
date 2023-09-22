#include<stdio.h>

int main()
{
    int ch,n,x;

    scanf("%c",&ch);
    scanf("%d",&n);

    for(int i=1;i<=n;i+=1)
    {
        scanf("%d",&x);
        for(int j=1;j<=x;j+=1)
        {
            printf("%c",ch);
        }
        printf("\n");
    }

    return 0;
}
