#include <stdio.h>

int main() {
    int n, i, j, sum = 0;
    int a[10][10];

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    // matrix input
    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // main diagonal sum (i == j)
    for(i = 0; i < n; i++) {
        sum += a[i][i];
    }

    printf("Sum of diagonal elements = %d", sum);

    return 0;
}