#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int a, b;
        char ch;
        scanf("%d%c%d", &a, &ch, &b);
        printf("%d\n", a + b);
    }

    return 0;
}
