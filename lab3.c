#include <stdio.h>

int main() {
    int choice, n;

    do {
        printf("\n--- MENU ---\n");
        printf("1. Factorial\n");
        printf("2. Reverse Number\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            int i = 1, fact = 1;

            printf("Enter number: ");
            scanf("%d", &n);

            while(i <= n) {
                fact = fact * i;
                i++;
            }

            printf("Factorial = %d\n", fact);
        }

        else if(choice == 2) {
            int rev = 0, r;

            printf("Enter number: ");
            scanf("%d", &n);

            while(n != 0) {
                r = n % 10;
                rev = rev * 10 + r;
                n = n / 10;
            }

            printf("Reverse = %d\n", rev);
        }

    } while(choice != 3);

    return 0;
}