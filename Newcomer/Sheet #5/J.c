#include <stdio.h>

double sum(int n)
{
    double sum = 0.0;
    for (int i = 0; i < n; i++)
    {
        double numbers;
        scanf("%lf", &numbers);
        sum += numbers;
    }
    return sum;
}

int main()
{
    int n;
    scanf("%d", &n);

    printf("%.8lf\n", sum(n) / (double)n);

    return 0;
}
