#include <stdio.h>

struct Book {
    char title[100];
    char author[100];
    float price;
};

void inputBook(struct Book *b, int index) {
    printf("\nEnter details for Book %d:\n", index + 1);
    printf("Title: ");
    scanf(" %[^\n]", b->title);  
    printf("Author: ");
    scanf(" %[^\n]", b->author);
    printf("Price: ");
    scanf("%f", &b->price);
}
void displayBook(struct Book b) {
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Price: %.2f\n", b.price);
}

int main() {
    struct Book books[3];
    int i, maxIndex = 0, minIndex = 0;
    for (i = 0; i < 3; i++) {
        inputBook(&books[i], i);
    }

    for (i = 1; i < 3; i++) {
        if (books[i].price > books[maxIndex].price) {
            maxIndex = i;
        }
        if (books[i].price < books[minIndex].price) {
            minIndex = i;
        }
    }


    printf("\nMost Expensive Book:\n");
    displayBook(books[maxIndex]);
    printf("\nLowest Priced Book:\n");
    displayBook(books[minIndex]);

    return 0;
}
