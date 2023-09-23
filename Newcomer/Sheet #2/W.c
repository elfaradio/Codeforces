/*
   *
  ***
 ***** 
******* 
 *****
  ***
   *
*/
#include <stdio.h>
int main()
{
    // row = n;
    // col = 1-n porjonto;
    int n,row,col;
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n-row;col++)
        {
            printf(" ");
        }
        for(col=1;col<=2*row-1;col++)
        {
            // col ar mangula print korte hobe
            printf("*");

        }
        printf("\n");
    }
    
    // row = n;
    // col = n-1 porjointo

    for(row=n;row>=1;row--)
    {
        for(col=1;col<=n-row;col++)
        {
            printf(" ");
        }
        for(col=1;col<=2*row-1;col++)
        {
            // col ar mangula print korte hobe
            printf("*");

        }
        printf("\n");
    }
}
