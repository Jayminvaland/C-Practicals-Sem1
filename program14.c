#include <stdio.h>

int main() {
    printf("My name is Jaymin\n");
    int balance = 5000;
    int amount;
    char choice;

    printf("Welcome to the National Bank of Bharat ATM\n");
    printf("Your starting balance is ₹%d\n\n", balance);

    do {
        printf("Enter amount to withdraw: ");
        scanf("%d", &amount);

        if (amount > balance) {
            printf("Insufficient balance.\n");
        } else if (amount <= 0) {
            printf("Invalid amount.\n");
        } else {
            balance -= amount;
            printf("Withdrawal successful.\n");
            printf("Remaining balance: ₹%d\n", balance);
        }

        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("\nThank you for using the ATM.\n");

    return 0;
}
