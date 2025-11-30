#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i, length;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    length = strlen(str);

    printf("Reversed string: ");
    for (i = length - 1; i >= 0; i--) {
        putchar(str[i]);
    }
    printf("\n");

    return 0;
}
