/*#include <stdio.h>

int main() {
    int n, i, j, isPrime;

    printf("Enter N: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i++) {
        isPrime = 1; // assume prime

        for(j = 2; j <= i/2; j++) {
            if(i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if(isPrime == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}*/ 


//using while loop
#include <stdio.h>

int main() {
    int n, i = 2, j, isPrime;

    printf("Enter N: ");
    scanf("%d", &n);

    while(i <= n) {
        j = 2;
        isPrime = 1;

        while(j <= i/2) {
            if(i % j == 0) {
                isPrime = 0;
                break;
            }
            j++;
        }

        if(isPrime == 1) {
            printf("%d ", i);
        }

        i++;
    }

    return 0;
}

