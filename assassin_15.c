#include <stdio.h>
#include <string.h>

int main() {
    char names[50][100]; 
    int n, i, j;
    char temp[100];

    printf("Enter number of students: ");
    scanf("%d", &n);
    getchar(); 

   for (i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strcspn(names[i], "\n")] = '\0'; 
    }

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
                printf("\nAttendance Register (Alphabetical Order):\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
