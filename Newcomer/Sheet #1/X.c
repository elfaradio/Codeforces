#include <stdio.h>

int main() {
    int num1, num2, num3, num4;
    int start, end;

 
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    if ((num3 < num1 && num4 < num1) || (num3 > num2 && num4 > num2)) {
        printf("-1\n");
    } else {
        if (num1 > num3) {
            start = num1;
        } else {
            start = num3;
        }
        if (num2 > num4) {
            end = num4;
        } else {
            end = num2;
        }
        printf("%d %d\n", start, end);
    }

    return 0;
}
