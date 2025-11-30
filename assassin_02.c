#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char line[100];
    fp = fopen("data.txt", "r");
    if (fp == NULL) {
        printf("Error opening file! Make sure data.txt exists.\n");
        return 1;
    }

    printf("Contents of data.txt:\n\n");
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);  // print each line
    }

    fclose(fp);
    return 0;
}
