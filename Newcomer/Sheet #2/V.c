#include <stdio.h>

int main() {
    int n,x;
    scanf("%d", &n);
     x=1;

    while(n--)
    {
       
        printf("%d %d %d PUM\n",x,x+1,x+2);
        x+=4;
        
    }
    

    return 0;
}
