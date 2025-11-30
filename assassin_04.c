#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    int n;
    char name[100];
    float price;
    fp = fopen("Books.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter number of books: ");
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++) {
        printf("Enter name of book %d: ", i + 1);
        fgets(name, sizeof(name), stdin);
        size_t len = strlen(name);
        if (len > 0 && name[len - 1] == '\n') {
            name[len - 1] = '\0';
        }

        printf("Enter price of book %d: ", i + 1);
        scanf("%f", &price);
        getchar();
        fprintf(fp, "Book %d: %s, Price: %.2f\n", i + 1, name, price);
    }

    fclose(fp);
    printf("Data successfully written to Books.txt\n");

    return 0;
}
