#include <stdio.h>
union Book {
    int accessionNumber;
    char title[50];
    char author[50];
    float price;
    int issued;   
};

int main() {
    printf("My name is Jaymin\n");
    union Book book;

    int tempAcc, tempIssued;
    char tempTitle[50], tempAuthor[50];
    float tempPrice;

   
    printf("Enter Accession Number: ");
    scanf("%d", &tempAcc);

    printf("Enter Book Title: ");
    scanf(" %[^\n]s", tempTitle);

    printf("Enter Author Name: ");
    scanf(" %[^\n]s", tempAuthor);

    printf("Enter Price: ");
    scanf("%f", &tempPrice);

    printf("Is the book issued? (1 = Yes, 0 = No): ");
    scanf("%d", &tempIssued);

   
    book.accessionNumber = tempAcc;
    book.price = tempPrice;
    book.issued = tempIssued;
   
    for(int i = 0; tempTitle[i] != '\0'; i++)
        book.title[i] = tempTitle[i];
    book.title[strlen(tempTitle)] = '\0';

    for(int i = 0; tempAuthor[i] != '\0'; i++)
        book.author[i] = tempAuthor[i];
    book.author[strlen(tempAuthor)] = '\0';

    
    printf("\n---- Book Details ----\n");
    printf("Accession Number : %d\n", tempAcc);
    printf("Title            : %s\n", tempTitle);
    printf("Author           : %s\n", tempAuthor);
    printf("Price            : %.2f\n", tempPrice);
    printf("Status           : %s\n", (tempIssued == 1) ? "Issued" : "Available");

    return 0;
}
