#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int id;
    char name[100];
    int cpl_mark;
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
        printf("\nEnter Student %d ID: ", i + 1);
        scanf("%d", &s.id);
        getchar(); 

        printf("Enter Student %d Name: ", i + 1);
        fgets(s.name, sizeof(s.name), stdin);
        size_t len = strlen(s.name);
        if (len > 0 && s.name[len - 1] == '\n') {
            s.name[len - 1] = '\0';
        }

        printf("Enter Student %d CPL Mark: ", i + 1);
        scanf("%d", &s.cpl_mark);
        fprintf(fp, "%d %s %d\n", s.id, s.name, s.cpl_mark);

        getchar(); 
    }

    fclose(fp);
    printf("\nData successfully written to student.txt\n");
    fp = fopen("student.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    printf("\nStudents with CPL marks greater than 75:\n");
    while (fscanf(fp, "%d %s %d", &s.id, s.name, &s.cpl_mark) == 3) {
        if (s.cpl_mark > 75) {
            printf("ID: %d, Name: %s, CPL Mark: %d\n", s.id, s.name, s.cpl_mark);
        }
    }

    fclose(fp);
    return 0;
}
