#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[100];
    char author[100];
    float price;
    char subject[100];
    int pages;
    char publisher[100];
} Book;

void sortBooks(Book books[], int n) {
    Book temp;
    int i, j;
    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if (strcmp(books[i].name, books[j].name) > 0) {
                temp = books[i];
                books[i] = books[j];
                books[j] = temp;
            }
        }
    }
}

void searchBook(Book books[], int n, char name[]) {
    int i;
    for (i = 0; i < n; i++) {
        if (strcmp(books[i].name, name) == 0) {
            printf("Book found: %s, Author: %s, Price: %.2f, Subject: %s, Pages: %d, Publisher: %s\n",
                books[i].name, books[i].author, books[i].price, books[i].subject, books[i].pages, books[i].publisher);
            return;
        }
    }
    printf("Book not found.\n");
}

int main() {
    int n;
    printf("Enter the number of books: ");
    scanf("%d", &n);

    Book books[n];
    int i;
    for (i = 0; i < n; i++) {
        printf("Enter details for book %d\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", books[i].name);
        printf("Author: ");
        scanf(" %[^\n]", books[i].author);
        printf("Price: ");
        scanf("%f", &books[i].price);
        printf("Subject: ");
        scanf(" %[^\n]", books[i].subject);
        printf("Pages: ");
        scanf("%d", &books[i].pages);
        printf("Publisher: ");
        scanf(" %[^\n]", books[i].publisher);
    }

    int choice;
    char searchName[100];
    while (1) {
        printf("\nMenu:\n1. Sort books by name\n2. Search book by name\n3. Exit\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                sortBooks(books, n);
                printf("Books sorted.\n");
                for (i = 0; i < n; i++) {
                    printf("%s, %s, %.2f, %s, %d, %s\n",
                        books[i].name, books[i].author, books[i].price, books[i].subject, books[i].pages, books[i].publisher);
                }
                break;
            case 2:
                printf("Enter book name to search: ");
                scanf(" %[^\n]", searchName);
                searchBook(books, n, searchName);
                break;
            case 3:
                exit(0);
            default:
                printf("Invalid choice.\n");
        }
    }
    return 0;
}

