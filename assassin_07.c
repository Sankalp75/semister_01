#include <stdio.h>
struct Employee {
    int id;
    char name[100];
    float salary;
};
void inputEmployee(struct Employee *e, int index) {
    printf("\nEnter details for Employee %d:\n", index + 1);
    printf("ID: ");
    scanf("%d", &e->id);
    printf("Name: ");
    scanf(" %[^\n]", e->name);  
    printf("Salary: ");
    scanf("%f", &e->salary);
}
void displayEmployee(struct Employee e) {
    printf("ID: %d\n", e.id);
    printf("Name: %s\n", e.name);
    printf("Salary: %.2f\n", e.salary);
}
int main() {
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee employees[n];

    for (int i = 0; i < n; i++) {
        inputEmployee(&employees[i], i);
    }

    printf("\nEmployees with Salary Above 50,000:\n");
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (employees[i].salary > 50000) {
            displayEmployee(employees[i]);
            printf("\n");
            found = 1;
        }
    }
    if (!found) {
        printf("No employees have salary above 50,000.\n");
    }
    return 0;
}
