#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    int count = 0;
    char ch;
    fp = fopen("Books.txt", "r");
    if (fp == NULL) {
        printf("Error opening file! Make sure Books.txt exists.\n");
        return 1;
    }
    while ((ch = fgetc(fp)) != EOF) {
        if (ch == '\n') {
            count++;
        }
    }

    fclose(fp);
    if (count == 0) {
        printf("The file is empty.\n");
    } else {
        printf("Number of lines in Books.txt: %d\n", count + 1);
    }

    return 0;
}
