#include <stdio.h>

int main() {
    int n, i, j;
    long long sum = 0;
    
    printf("Enter size of square matrix (n): ");
    scanf("%d", &n);
    
    int matrix[n][n];
    
    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    for (i = 0; i < n; i++) {
        sum = sum + matrix[i][i];
    }
    
    printf("Sum of main diagonal: %lld\n", sum);
    
    return 0;
}