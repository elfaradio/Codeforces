#include <stdio.h>

int main() {
    int num1, num2;
    char ch;
    
   
    scanf("%d %c %d", &num1, &ch, &num2);

    switch (ch) {
        case '=':
            if (num1 == num2) {
                printf("Right\n");
            } else {
                printf("Wrong\n");
            }
            break;
        case '>':
            if (num1 > num2) {
                printf("Right\n");
            } else {
                printf("Wrong\n");
            }
            break;
        case '<':
            if (num1 < num2) {
                printf("Right\n");
            } else {
                printf("Wrong\n");
            }
            break;
        
           
    }

    return 0;
}
