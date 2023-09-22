#include<stdio.h>
int main()
{
    int n;
    long long int sum=0;
    scanf("%d",&n);

       sum = ((long long int)n*(n+1))/2;

    printf("%lld\n",sum);
    return 0;
}
