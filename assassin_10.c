#include <stdio.h>

int main() {
    char email[100];
    char *ptr;

    printf("Enter your email ID: ");
    fgets(email, sizeof(email), stdin);

    email[strcspn(email, "\n")] = '\0';
    ptr = email;
    while (*ptr != '\0' && *ptr != '@') {
        ptr++;
    }
    if (*ptr == '@') {
        ptr++;  
        printf("Domain name: %s\n", ptr);
    } else {
        printf("Invalid email ID. '@' not found.\n");
    }

    return 0;
}
