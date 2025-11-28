#include <stdio.h>
#include <ctype.h>   // for isdigit()

int main() {
    char mobile[100];
    int count = 0;
    char *ptr;

    printf("Enter your mobile number: ");
    fgets(mobile, sizeof(mobile), stdin);

    // Initialize pointer to start of string
    ptr = mobile;

    // Traverse string using pointer
    while (*ptr != '\0') {
        if (isdigit(*ptr)) {
            count++;
        }
        ptr++;
    }

    printf("Total digits in mobile number: %d\n", count);

    // Simple validity check (example: Indian mobile numbers usually have 10 digits)
    if (count == 10) {
        printf("Valid mobile number (10 digits).\n");
    } else {
        printf("Invalid mobile number (digit count mismatch).\n");
    }

    return 0;
}
