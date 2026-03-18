#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter n: ");
    scanf("%d", &n);

    // ১. Star Diamond Pattern
    printf("\n--- Star Diamond Pattern ---\n");
    // উপরের অংশ
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++) printf(" ");
        for (j = 1; j <= 2 * i - 1; j++) printf("*");
        printf("\n");
    }
    // নিচের অংশ
    for (i = n - 1; i >= 1; i--) {
        for (j = 1; j <= n - i; j++) printf(" ");
        for (j = 1; j <= 2 * i - 1; j++) printf("*");
        printf("\n");
    }

    // ২. Alphabetic Diamond Pattern
    printf("\n--- Alphabetic Diamond Pattern ---\n");
    // উপরের অংশ
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++) printf(" ");
        for (j = 0; j < 2 * i - 1; j++) printf("%c", 'A' + j);
        printf("\n");
    }
    // নিচের অংশ
    for (i = n - 1; i >= 1; i--) {
        for (j = 1; j <= n - i; j++) printf(" ");
        for (j = 0; j < 2 * i - 1; j++) printf("%c", 'A' + j);
        printf("\n");
    }

    return 0;
}