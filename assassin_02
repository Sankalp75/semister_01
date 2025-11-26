#include <stdio.h>
#include <string.h>

int main() {
    char source[100], destination[100];

    printf("Enter a string: ");
    fgets(source, sizeof(source), stdin);

    // Remove newline if present
    source[strcspn(source, "\n")] = '\0';

    // Copy string
    strcpy(destination, source);

    printf("Source string: %s\n", source);
    printf("Copied string: %s\n", destination);

    return 0;
}
