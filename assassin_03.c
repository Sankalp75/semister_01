#include <stdio.h>
struct Student {
    char name[100];
    int age;
    float marks;
};

void inputStudent(struct Student *s, int index) {
    printf("\nEnter details for Student %d:\n", index + 1);
    printf("Name: ");
    scanf(" %[^\n]", s->name); 
    printf("Age: ");
    scanf("%d", &s->age);
    printf("Marks: ");
    scanf("%f", &s->marks);
}

void displayStudent(struct Student s, int index) {
    printf("\nStudent %d Information:\n", index + 1);
    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct Student students[3]; 

    for (int i = 0; i < 3; i++) {
        inputStudent(&students[i], i);
    }
    for (int i = 0; i < 3; i++) {
        displayStudent(students[i], i);
    }
    return 0;
}
