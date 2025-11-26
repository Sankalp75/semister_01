#include <stdio.h>
#include <string.h>

int main() {
    char website[200];
    int length;

    printf("Enter a website link: ");
    fgets(website, sizeof(website), stdin);

    // Remove newline if present
    website[strcspn(website, "\n")] = '\0';

    length = strlen(website);

    // Check if last 4 characters are ".com"
    if (length >= 4 &&
        website[length - 4] == '.' &&
        website[length - 3] == 'c' &&
        website[length - 2] == 'o' &&
        website[length - 1] == 'm') {
        printf("Valid link: ends with .com\n");
    } else {
        printf("Invalid link: does not end with .com\n");
    }

    return 0;
}
