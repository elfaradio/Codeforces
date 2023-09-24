#include <stdio.h>

int main()
{
    long long n, q;
    scanf("%lld %lld", &n, &q);

    long long A[n];
    long long psum[n];

    for (int i = 1; i <= n; i++)
    {
        scanf("%lld", &A[i]);
    }

    psum[1] = A[1];
    for (int i = 2; i <=n; i++)
    {
        psum[i] = psum[i - 1] + A[i];
    }

    int start, end;

    while (q--)
    {
        scanf("%d %d", &start, &end);

        long long sum = 0;

        if (start > 1)
        {
            sum = psum[end] - psum[start - 1];
        }
        else
        {
            sum = psum[end];
        }

        printf("%lld\n", sum);
    }

    return 0;
}
