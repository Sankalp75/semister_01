#include <stdio.h>

struct Student {
    char name[100];
    int age;
    float totalMarks;
};
void inputStudent(struct Student *s, int index) {
    printf("\nEnter details for Student %d:\n", index + 1);
    printf("Name: ");
    scanf(" %[^\n]", s->name);  
    printf("Age: ");
    scanf("%d", &s->age);
    printf("Total Marks: ");
    scanf("%f", &s->totalMarks);
}
void displayStudent(struct Student s, int index) {
    printf("\nStudent %d Information:\n", index + 1);
    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
    printf("Total Marks: %.2f\n", s.totalMarks);
}

int main() {
    struct Student students[2];
    float average;

    for (int i = 0; i < 2; i++) {
        inputStudent(&students[i], i);
    }

    for (int i = 0; i < 2; i++) {
        displayStudent(students[i], i);
    }


    average = (students[0].totalMarks + students[1].totalMarks) / 2.0;
    printf("\nAverage of Total Marks: %.2f\n", average);
    return 0;
}
