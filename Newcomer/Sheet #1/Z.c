

    #include<stdio.h>
    #include<math.h>
    int main()

    {

        long long int a,b,c,d;
        double x,y;

        scanf("%lld %lld %lld %lld",&a,&b,&c,&d);

         x = b*log10(a);
         y = d*log10(c);

        if(x>y)
            printf("YES\n");
        else
            printf("NO\n");
        return 0;
    }
