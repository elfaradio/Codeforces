#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long N, M;
    scanf("%lld%lld", &N, &M);

    long long A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &A[i]);
    }

    int B[M];
    for (int i = 0; i < M; i++)
    {
        scanf("%d", &B[i]);
    }

    int cnt = 0;
    int j = 0;

    for (int i = 0; i < N; i++)
    {
        if (A[i] == B[j])
        {
            cnt++;
            j++;
        }
    }

    if (cnt == M)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
