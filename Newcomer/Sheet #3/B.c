#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    scanf(" %d ", &N);
    int A[N];
    for (int i = 0; i < N; i++) {
        scanf(" %d ", &A[i]);
    }
    int X;
    scanf(" %d ", &X);
    int flag = 0;
    for (int i = 0; i < N; i++) {
        if (A[i] == X) {
            printf(" %d ", i);
            flag = 1;
            break;
        }
    }
    if (flag == 0) {
        printf(" -1 ");
    }
    return 0;
}
