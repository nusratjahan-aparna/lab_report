#include <stdio.h>

struct book {
    char title[50];
    char author[50];
    float price;
};

int main() {
    int n, i, maxIndex = 0;

    printf("Enter number of books: ");
    scanf("%d", &n);

    struct book b[n];

    // Input book details
    for(i = 0; i < n; i++) {
        printf("\nEnter details of book %d\n", i + 1);

        printf("Title: ");
        scanf("%s", b[i].title);

        printf("Author: ");
        scanf("%s", b[i].author);

        printf("Price: ");
        scanf("%f", &b[i].price);
    }

    // Find most expensive book
    for(i = 1; i < n; i++) {
        if(b[i].price > b[maxIndex].price) {
            maxIndex = i;
        }
    }

    // Display most expensive book
    printf("\n--- Most Expensive Book ---\n");
    printf("Title: %s\n", b[maxIndex].title);
    printf("Author: %s\n", b[maxIndex].author);
    printf("Price: %.2f\n", b[maxIndex].price);

    return 0;
}