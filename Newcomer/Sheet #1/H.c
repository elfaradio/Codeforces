
#include <stdio.h>
#include<math.h>

int main()
{

    double a,b;
    scanf("%lf %lf", &a,&b);
    double div = a/b;
    int x = floor(div);
    int y = ceil(div);
    int z = round(div);

    printf("floor %.0lf / %.0lf = %d\n",a,b,x);
    printf("ceil %.0lf / %.0lf = %d\n",a,b,y);
    printf("round %.0lf / %.0lf = %d\n",a,b,z);
    return 0;


}
