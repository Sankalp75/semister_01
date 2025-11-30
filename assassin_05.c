#include <stdio.h>
#include <string.h>
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
void swapStudents(struct Student *s1, struct Student *s2) {
    struct Student temp;
    temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}

int main() {
    struct Student student1, student2;

    inputStudent(&student1, 0);
    inputStudent(&student2, 1);
    printf("\n--- Before Swap ---");
    displayStudent(student1, 0);
    displayStudent(student2, 1);
    
    swapStudents(&student1, &student2);

    printf("\n--- After Swap ---");
    displayStudent(student1, 0);
    displayStudent(student2, 1);

    return 0;
}
