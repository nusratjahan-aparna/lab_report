#include <stdio.h>

int main() {
    int num, digit;
    int count = 0, evenCount = 0, oddSum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle negative number
    if(num < 0) {
        num = -num;
    }

    while(num > 0) {
        digit = num % 10;   // get last digit

        count++;            // count digits

        if(digit % 2 == 0) {
            evenCount++;    // count even digits
        } else {
            oddSum += digit; // sum of odd digits
        }

        num = num / 10;     // remove last digit
    }

    printf("Total digits = %d\n", count);
    printf("Even digits = %d\n", evenCount);
    printf("Sum of odd digits = %d\n", oddSum);

    return 0;
}