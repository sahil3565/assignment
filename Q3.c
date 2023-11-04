#include <stdio.h>

// Define the structure "books"
struct Books {
    char title[100];
    char author[100];
    char subject[100];
    int book_id;
};

int main() {
    struct Books library[5]; // Declare an array of structures to store details of 5 books
    int i;

    // Input: Read details of 5 books from the user
    printf("Enter details of 5 books:\n");
    for (i = 0; i < 5; i++) {
        printf("Book %d\n", i + 1);
        printf("Title: ");
        scanf("%s", library[i].title);
        printf("Author: ");
        scanf("%s", library[i].author);
        printf("Subject: ");
        scanf("%s", library[i].subject);
        printf("Book ID: ");
        scanf("%d", &library[i].book_id);
    }

    // Output: Display the details of the books entered by the user
    printf("\nDetails of the books entered by the user:\n");
    for (i = 0; i < 5; i++) {
        printf("Book %d\n", i + 1);
        printf("Title: %s\n", library[i].title);
        printf("Author: %s\n", library[i].author);
        printf("Subject: %s\n", library[i].subject);
        printf("Book ID: %d\n", library[i].book_id);
    }

    return 0;
}
