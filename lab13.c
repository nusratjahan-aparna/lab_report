#include <stdio.h>

struct student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct student s;
    FILE *fp;
    int n, i;

    // Write records to file
    fp = fopen("students.dat", "wb");
    if(fp == NULL) {
        printf("File cannot be opened!\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Roll: ");
        scanf("%d", &s.roll);

        printf("Name: ");
        scanf("%s", s.name);

        printf("Marks: ");
        scanf("%f", &s.marks);

        fwrite(&s, sizeof(s), 1, fp);
    }

    fclose(fp);

    // Read and display records
    fp = fopen("students.dat", "rb");
    if(fp == NULL) {
        printf("File cannot be opened!\n");
        return 1;
    }

    printf("\n--- Student Records ---\n");

    while(fread(&s, sizeof(s), 1, fp) == 1) {
        printf("Roll: %d, Name: %s, Marks: %.2f\n", s.roll, s.name, s.marks);
    }

    fclose(fp);

    return 0;
}