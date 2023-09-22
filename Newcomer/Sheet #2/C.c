#include <stdio.h>

int main() {
        int i,n,num,even=0,odd=0,positive=0,negative=0;
        scanf("%d",&n);
        for(i=1;i<=n;i++){
            scanf("%d",&num);
            if(num%2==0){
                even++;
            }
            if(num%2!=0){
                odd++;
            }
            if(0<num){
                positive++;
            }
            if(0>num){
                negative++;
            }

       }
        printf("Even: %d\n",even);
        printf("Odd: %d\n",odd);
        printf("Positive: %d\n",positive);
        printf("Negative: %d\n",negative);

    return 0;
}
