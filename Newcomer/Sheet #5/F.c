#include <stdio.h>
#include <math.h>

long long equation(int x, int n) {
    long long s = 0; 
    for (int i = 0; i <= n; i += 2) {
        s += pow(x, i);
    }
    s -= 1; 
    return s;
}

int main() {
    int x, n;
    scanf("%d %d", &x, &n);
    printf("%lld\n", equation(x, n));
    return 0;
}
