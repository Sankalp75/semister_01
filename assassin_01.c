#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    int n, roll_no;
    
    fp = fopen("data.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter Roll No of student %d: ", i + 1);
        scanf("%d", &roll_no);
        fprintf(fp, "Student %d Roll No: %d\n", i + 1, roll_no);
    }

    fclose(fp);
    printf("Data successfully written to data.txt\n");

    return 0;
}
