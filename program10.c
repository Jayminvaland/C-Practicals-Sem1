#include <stdio.h>

int main() {
    printf("My name is Jaymin\n");
    int choice;
    int total = 0;

    printf("***** FOODIES RESTAURANT MENU *****\n");
    printf("1. Burger        - ₹150\n");
    printf("2. Pizza         - ₹200\n");
    printf("3. Pasta         - ₹120\n");
    printf("4. Sandwich      - ₹100\n");
    printf("5. French Fries  - ₹80\n");
    printf("Enter 0 to finish ordering.\n\n");

    while (1) {
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 0) {
            break;   
        }

        switch (choice) {
            case 1:
                total += 150;
                printf("Burger added! ₹150\n");
                break;

            case 2:
                total += 200;
                printf("Pizza added! ₹200\n");
                break;

            case 3:
                total += 120;
                printf("Pasta added! ₹120\n");
                break;

            case 4:
                total += 100;
                printf("Sandwich added! ₹100\n");
                break;

            case 5:
                total += 80;
                printf("French Fries added! ₹80\n");
                break;

            default:
                printf("Invalid choice! Please enter again.\n");
        }
    }

    printf("\nTotal Amount = ₹%d\n", total);
    printf("Thank you for ordering from Foodies!\n");

    return 0;
}
