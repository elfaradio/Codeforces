#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf(" %d ", &n);
    int A[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    
    int main_diagonal_sum = 0, another_diagonal_sum = 0;
    for (int i = 0; i < n; i++) {
        main_diagonal_sum += A[i][i];
        another_diagonal_sum += A[i][n - i - 1];
    }
    int sum = abs(main_diagonal_sum - another_diagonal_sum);
    printf("%d", sum);
    return 0;
}
