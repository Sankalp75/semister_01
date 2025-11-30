#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fp;
    int n, id;
    char name[100];
    float salary;
    
    fp = fopen("Employees.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter number of employees: ");
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++) {
        printf("\nEnter Employee %d ID: ", i + 1);
        scanf("%d", &id);

        getchar(); 

        printf("Enter Employee %d Name: ", i + 1);
        fgets(name, sizeof(name), stdin);

        size_t len = strlen(name);
        if (len > 0 && name[len - 1] == '\n') {
            name[len - 1] = '\0';
        }

        printf("Enter Employee %d Salary: ", i + 1);
        scanf("%f", &salary);
        fprintf(fp, "ID: %d, Name: %s, Salary: %.2f\n", id, name, salary);

        getchar();
    }

    fclose(fp);
    printf("\nEmployee details successfully written to Employees.txt\n");

    return 0;
}
