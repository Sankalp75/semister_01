#include <stdio.h>
struct Student {
    char name[100];
    float marks;
};
void inputStudent(struct Student *s, int index) {
    printf("\nEnter details for Student %d:\n", index + 1);
    printf("Name: ");
    scanf(" %[^\n]", s->name);  
    printf("Marks: ");
    scanf("%f", &s->marks);
}
void displayStudent(struct Student s, int index) {
    printf("\nStudent %d Information:\n", index + 1);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
}
int main() {
    int n;
    float sum = 0, average;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n]; 

    for (int i = 0; i < n; i++) {
        inputStudent(&students[i], i);
        sum += students[i].marks;
    }
    for (int i = 0; i < n; i++) {
        displayStudent(students[i], i);
    }
    printf("\nAverage Marks of %d Students: %.2f\n", n, average);
 return 0;
}
