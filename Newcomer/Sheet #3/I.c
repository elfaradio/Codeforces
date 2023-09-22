#include <stdio.h>

int main() {
    int q;
    scanf("%d", &q);

    while (q--) {
        int n;
        scanf("%d", &n);

        int A[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &A[i]);
        }

        long long msym = A[0] + A[1]+1 ; 
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                long long sum = A[i] + A[j] + j - i;
                if (sum < msym) {
                    msym = sum;
                }
            }
        }

        printf("%lld\n", msym);
    }

    return 0;
}
