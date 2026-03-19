#include <stdio.h>
#include <string.h>

struct employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct employee e;
    FILE *fp;
    int n, i, searchId, found = 0;

    // Write employee records to file
    fp = fopen("employees.dat", "wb");
    if (fp == NULL)
    {
        printf("File cannot be opened!\n");
        return 1;
    }

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of employee %d\n", i + 1);

        printf("ID: ");
        scanf("%d", &e.id);

        printf("Name: ");
        scanf("%s", e.name);

        printf("Salary: ");
        scanf("%f", &e.salary);

        fwrite(&e, sizeof(e), 1, fp);
    }

    fclose(fp);

    // Search employee by ID
    printf("\nEnter ID to search: ");
    scanf("%d", &searchId);

    fp = fopen("employees.dat", "rb");
    if (fp == NULL)
    {
        printf("File cannot be opened!\n");
        return 1;
    }

    while (fread(&e, sizeof(e), 1, fp) == 1)
    {
        if (e.id == searchId)
        {
            printf("\nEmployee Found!\n");
            printf("ID: %d\n", e.id);
            printf("Name: %s\n", e.name);
            printf("Salary: %.2f\n", e.salary);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Employee with ID %d not found.\n", searchId);
    }

    fclose(fp);

    return 0;
}