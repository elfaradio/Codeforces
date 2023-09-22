#include <stdio.h>
int main()
{

    int x;
    while(1000) {
            scanf("%d",&x);
        if(x==1999) {
            printf("Correct\n");
    break;
        }
        else {
            printf("Wrong\n");
        }
    }
    return 0;
}


