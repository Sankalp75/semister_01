#include <stdio.h>
#include <ctype.h>  
int main() {
    char str[200];
    int vowels = 0, consonants = 0;
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]); 

        if (isalpha(ch)) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Total vowels: %d\n", vowels);
    printf("Total consonants: %d\n", consonants);

    return 0;
}
