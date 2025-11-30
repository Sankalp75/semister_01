#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int roll_no;
    char name[100];
    int marks;
};

int main() {
    FILE *fp;
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    fp = fopen("student.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    struct Student s;

    getchar();

    for (int i = 0; i < n; i++) {
        printf("\nEnter Roll No of Student %d: ", i + 1);
        scanf("%d", &s.roll_no);
        getchar();

        printf("Enter Name of Student %d: ", i + 1);
        fgets(s.name, sizeof(s.name), stdin);

        size_t len = strlen(s.name);
        if (len > 0 && s.name[len - 1] == '\n') {
            s.name[len - 1] = '\0';
        }

        printf("Enter Marks of Student %d in C Programming: ", i + 1);
        scanf("%d", &s.marks);

        fprintf(fp, "%d %s %d\n", s.roll_no, s.name, s.marks);

        getchar(); 
    }

    fclose(fp);
    printf("\nData successfully written to student.txt\n");

    fp = fopen("student.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    struct Student highest, lowest;
    int first = 1;

    while (fscanf(fp, "%d %s %d", &s.roll_no, s.name, &s.marks) == 3) {
        if (first) {
            highest = lowest = s;
            first = 0;
        } else {
            if (s.marks > highest.marks) {
                highest = s;
            }
            if (s.marks < lowest.marks) {
                lowest = s;
            }
        }
    }

    fclose(fp);

    printf("\nHighest Scoring Student:\n");
    printf("Roll No: %d, Name: %s, Marks: %d\n", highest.roll_no, highest.name, highest.marks);

    printf("\nLowest Scoring Student:\n");
    printf("Roll No: %d, Name: %s, Marks: %d\n", lowest.roll_no, lowest.name, lowest.marks);

    return 0;
}
