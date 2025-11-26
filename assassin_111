#include <stdio.h>
#include <string.h>

int main() {
    char city1[100], city2[100];

    printf("Enter first city name: ");
    fgets(city1, sizeof(city1), stdin);
    city1[strcspn(city1, "\n")] = '\0';  // remove newline

    printf("Enter second city name: ");
    fgets(city2, sizeof(city2), stdin);
    city2[strcspn(city2, "\n")] = '\0';  // remove newline

    // Compare case-sensitive
    if (strcmp(city1, city2) == 0) {
        printf("The city names are the same.\n");
    } else {
        printf("The city names are different.\n");
    }

    return 0;
}
