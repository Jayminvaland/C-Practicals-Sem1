#include <stdio.h>
#include <string.h>


char books[5][50] = {"C Programming", "Java Basics", "Python Guide", "Data Structures", "Algorithms"};
int available[5] = {1, 1, 1, 1, 1}; 


void displayBooks() {
    printf("\n--- Available Books ---\n");
    for(int i = 0; i < 5; i++) {
        if(available[i] == 1)
            printf("%d. %s\n", i+1, books[i]);
    }
}


int getTotalBooks() {
    int count = 0;
    for(int i = 0; i < 5; i++) {
        if(available[i] == 1)
            count++;
    }
    return count;
}


void borrowBook(char* bookName) {
    int found = 0;

    for(int i = 0; i < 5; i++) {
        if(strcmp(books[i], bookName) == 0) {
            found = 1;
            if(available[i] == 1) {
                available[i] = 0;
                printf("\nYou borrowed: %s\n", bookName);
            } else {
                printf("\nSorry, the book \"%s\" is already borrowed.\n", bookName);
            }
            break;
        }
    }

    if(!found) {
        printf("\nBook \"%s\" not found in library.\n", bookName);
    }
}


float calculateFine(int daysLate) {
    float finePerDay = 5.0; 
    return daysLate * finePerDay;
}

int main() {
    printf("My name is Jaymin");
    int choice, days;
    char bookName[50];

    while(1) {
        printf("\n====== Library Menu ======\n");
        printf("1. Display Available Books\n");
        printf("2. Get Total Books\n");
        printf("3. Borrow a Book\n");
        printf("4. Calculate Fine\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                displayBooks();
                break;

            case 2:
                printf("\nTotal available books: %d\n", getTotalBooks());
                break;

            case 3:
                printf("\nEnter book name to borrow: ");
                scanf(" %[^\n]s", bookName); 
                borrowBook(bookName);
                break;

            case 4:
                printf("\nEnter number of days late: ");
                scanf("%d", &days);
                printf("Fine amount: ₹%.2f\n", calculateFine(days));
                break;

            case 5:
                printf("\nExiting... Goodbye!\n");
                return 0;

            default:
                printf("\nInvalid choice! Try again.\n");
        }
    }

    return 0;
}

