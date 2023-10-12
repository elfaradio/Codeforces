#include <stdio.h>
#include <string.h>

int main() {
    char s[1001];
    scanf("%s", s);
    int i, j;
    int l = strlen(s);
    int f = 0;

    for (i = 0, j = l - 1; j >= i; j--, i++) {
        if (s[j] != s[i]) {
            f = 1;
            break;
        }
    }

    if (f == 1) {
        printf("NO\n");
    } else {
        printf("YES\n");
    }

    return 0;
}
