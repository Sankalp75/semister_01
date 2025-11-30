#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *source, *target;
    char ch;
    source = fopen("Books.txt", "r");
    if (source == NULL) {
        printf("Error: Could not open Books.txt\n");
        return 1;
    }
    target = fopen("copy.txt", "w");
    if (target == NULL) {
        printf("Error: Could not create copy.txt\n");
        fclose(source);
        return 1;
    }
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, target);
    }

    printf("Contents successfully copied from Books.txt to copy.txt\n");
    fclose(source);
    fclose(target);

    return 0;
}
