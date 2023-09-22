#include <stdio.h>
int main()
{

    int x,y;
    scanf("%d%d",&x,&y);
    if(x%y==0|| y%x==0) {
        printf("Multiples\n");

    }
    else {
        printf("No Multiples\n");
    }
    return 0;
}
