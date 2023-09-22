#include <stdio.h>

int main() {
    int n, i, lowest,p;
    scanf("%d", &n);
    int a[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    lowest = a[0];
    p=1;
   
    for (i = 0; i < n; i++) {
        if (lowest > a[i]) {
            lowest = a[i];
            p=1+i;
           
           
            
        }
       
    }
     printf("%d %d\n", lowest, p);
      

   
    
    return 0;
}

