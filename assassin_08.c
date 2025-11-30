#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[100];
    float marks;
};
void inputStudent(struct Student *s, int index) {
    printf("\nEnter details for Student %d:\n", index + 1);
    printf("Roll Number: ");
    scanf("%d", &s->roll);
    printf("Name: ");
    scanf(" %[^\n]", s->name);   
    printf("Marks: ");
    scanf("%f", &s->marks);
}
void displayStudent(struct Student s) {
    printf("Roll Number: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    int n, searchRoll, found = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n]; 

    for (int i = 0; i < n; i++) {
        inputStudent(&students[i], i);
    }
    printf("\nEnter roll number to search: ");
    scanf("%d", &searchRoll);

    for (int i = 0; i < n; i++) {
        if (students[i].roll == searchRoll) {
            printf("\nStudent Found:\n");
            displayStudent(students[i]);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\nNo student found with roll number %d.\n", searchRoll);
    }

    return 0;
}
