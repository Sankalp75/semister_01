#include <stdio.h>

int main() {
    char password[100];
    char *ptr;
    int length = 0;

    printf("Enter your password: ");
    fgets(password, sizeof(password), stdin);

    // Initialize pointer to start of password
    ptr = password;

    // Count characters using pointer
    while (*ptr != '\0' && *ptr != '\n') {
        length++;
        ptr++;
    }

    if (length < 8) {
        printf("Weak Password.\n");
    } else {
        printf("Password length is sufficient.\n");
    }

    return 0;
}
