#include <stdio.h>

int main() {
    int a, b,y;
    scanf("%d %d", &a, &b);
    y=0;
    

    while (a<=b) 
    {
        a *= 3;
        b *= 2;
        y++;
    }

    printf("%d\n", y);
    return 0;
}
