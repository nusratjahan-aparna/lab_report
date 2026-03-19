#include <stdio.h>

int main() {
    char str[100], reversed[100];
    int len = 0, i, j, isPalindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    // 1. Calculate length manually
    while (str[len] != '\0') {
        len++;
    }

    // 2. Reverse the string manually
    // We store the reverse in a new array 'reversed'
    j = 0;
    for (i = len - 1; i >= 0; i--) {
        reversed[j] = str[i];
        j++;
    }
    reversed[j] = '\0'; // Adding null terminator

    printf("Reversed string: %s\n", reversed);

    // 3. Check for Palindrome
    // Compare characters from the start and end moving inwards
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            isPalindrome = 0; // Not a palindrome
            break;
        }
    }

    if (isPalindrome == 1) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}