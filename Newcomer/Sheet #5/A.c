#include <stdio.h>
int sum (int c,int f);
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d\n",sum(a,b));
    return 0;

}
int sum (int c,int f) {
    return (c+f);
}
