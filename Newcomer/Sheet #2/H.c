#include <stdio.h>
int main()
{
    int a,i,kotobar;

    scanf("%d",&a);

    kotobar=0;

    for(i=1; i<=a; i++)
    {
	if(a%i==0)
        kotobar++;
    }
    if(kotobar==2)
    {
       printf("YES\n");
	}
    else
    {
       printf("NO\n");
	}
	return 0;
}

