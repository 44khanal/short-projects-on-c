#include <stdio.h>

// Define a structure to hold book details
struct Book {
    char title[50];
    char author[50];
    float price;
};

int main() {
    struct Book books[5]; // Array to store details of 5 books
    int i;

    // Input details for each book
    for(i = 0; i < 5; i++) {
        printf("Enter details for book %d:\n", i + 1);

        printf("Title: ");
        scanf(" %[^\n]%*c", books[i].title); // Read string with spaces

        printf("Author: ");
        scanf(" %[^\n]%*c", books[i].author); // Read string with spaces

        printf("Price: ");
        scanf("%f", &books[i].price);

        printf("\n");
    }

    // Display the details of all books
    printf("Details of the books:\n");
    for(i = 0; i < 5; i++) {
        printf("Book %d:\n", i + 1);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Price: $%.2f\n\n", books[i].price);
    }

    return 0;
}
