#include<stdio.h>
int main()
{
    float a;
    scanf("%f",&a);
    if(a>=0 && a<=25)
        printf("Interval [0,25]\n");
    else if(a>25 && a<=50)
        printf("Interval (25,50]\n");
    else if(a>50 && a<=75)
        printf("Interval (50,75]\n");
    else if(a>75 && a<=100)
        printf("Interval (75,100]\n");
    else
        printf("Out of Intervals\n");

    return 0;
}
