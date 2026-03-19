#include <stdio.h>

int main() {
    char str[200];
    int v = 0, c = 0, w = 1, i;

    printf("Enter a sentence: ");
    scanf("%[^\n]", str); // This reads the full line including spaces

    for (i = 0; str[i] != '\0'; i++) {
        
        // 1. Logic for Vowels
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            v++;
        }
        // 2. Logic for Consonants (Check if it's a letter first)
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            c++;
        }

        // 3. Logic for Words (Count spaces)
        if (str[i] == ' ') {
            w++;
        }
    }

    printf("Total Words: %d\n", w);
    printf("Total Vowels: %d\n", v);
    printf("Total Consonants: %d\n", c);

    return 0;
}