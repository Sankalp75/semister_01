#include <stdio.h>
#include <ctype.h>   // for toupper()

int main() {
    char str[200];
    char *ptr;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    ptr = str;

    while (*ptr != '\0') {
        if (*ptr >= 'a' && *ptr <= 'z') {
            *ptr = *ptr - 32;  
       
        }
        ptr++;  
    }

    printf("String in uppercase: %s\n", str);

    return 0;
}
