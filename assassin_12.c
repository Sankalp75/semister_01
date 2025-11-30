#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char sentence[500];
    int i, words = 0;
    int inWord = 0;  

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    for (i = 0; sentence[i] != '\0'; i++) {
        if (!isspace(sentence[i]) && sentence[i] != '\n') {
            if (inWord == 0) {
                words++;      
                inWord = 1;   
            }
        } else {
            inWord = 0;      
        }
    }
  printf("Total number of words: %d\n", words);

    return 0;
}
