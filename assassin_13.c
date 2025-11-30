#include <stdio.h>
#include <ctype.h>  

int main() {
    char mobile[100];
    int count = 0;
    char *ptr;

    printf("Enter your mobile number: ");
    fgets(mobile, sizeof(mobile), stdin);

    ptr = mobile;

    while (*ptr != '\0') {
        if (isdigit(*ptr)) {
            count++;
        }
        ptr++;
    }

              printf("Total digits in mobile number: %d\n", count);

    if (count == 10) {
        printf("Valid mobile number (10 digits).\n");
    } else {
        printf("Invalid mobile number (digit count mismatch).\n");
    }

    return 0;
}
