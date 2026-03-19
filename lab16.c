#include <stdio.h>

int main() {
    FILE *fp, *evenFile, *oddFile;
    int num;

    // Open input file (contains integers)
    fp = fopen("input.txt", "r");
    if(fp == NULL) {
        printf("Input file cannot be opened!\n");
        return 1;
    }

    // Open output files
    evenFile = fopen("even.txt", "w");
    oddFile = fopen("odd.txt", "w");

    if(evenFile == NULL || oddFile == NULL) {
        printf("Output files cannot be opened!\n");
        return 1;
    }

    // Read numbers and separate
    while(fscanf(fp, "%d", &num) != EOF) {
        if(num % 2 == 0)
            fprintf(evenFile, "%d ", num);
        else
            fprintf(oddFile, "%d ", num);
    }

    fclose(fp);
    fclose(evenFile);
    fclose(oddFile);

    printf("Numbers separated into even.txt and odd.txt successfully.\n");

    return 0;
}