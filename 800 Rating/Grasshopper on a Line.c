#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int x, k;
        scanf("%d %d", &x, &k);

        if (x < k || x % k != 0) {
            printf("1\n%d\n", x);
        } else {
            printf("2\n%d %d\n",x-k-1, k+1);
        }
    }

    return 0;
}
