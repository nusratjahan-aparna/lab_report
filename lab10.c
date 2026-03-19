#include <stdio.h>

struct employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    int n, i, j;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct employee e[n], temp;

    // Input employee details
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details for employee %d\n", i + 1);

        printf("ID: ");
        scanf("%d", &e[i].id);

        printf("Name: ");
        scanf("%s", e[i].name);

        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }

    // Sorting by salary (ascending order)
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (e[i].salary > e[j].salary)
            {
                temp = e[i];
                e[i] = e[j];
                e[j] = temp;
            }
        }
    }

    // Display sorted employees
    printf("\n--- Employees Sorted by Salary (Ascending) ---\n");
    for (i = 0; i < n; i++)
    {
        printf("ID: %d, Name: %s, Salary: %.2f\n", e[i].id, e[i].name, e[i].salary);
    }

    return 0;
}