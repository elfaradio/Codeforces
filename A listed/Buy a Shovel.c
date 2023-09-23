#include <stdio.h>

int main() {
    int price, coin;
    scanf("%d %d", &price, &coin);
    
    int cnt = 0;
    int result = 0;

    while (1) {
        cnt++;
        result = price * cnt;

        if (result % 10 == 0 || result % 10 == coin) {
            break;
        }
    }

    printf("%d\n", cnt);

    return 0;
}
