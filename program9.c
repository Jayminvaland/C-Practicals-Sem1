#include <stdio.h>

int main() {
    printf("My name is Jaymin\n");
    float totalAmount, discount = 0, finalAmount;

    printf("Enter the total shopping amount: ");
    scanf("%f", &totalAmount);

    
    if (totalAmount < 1000) {
        discount = 0;
    } 
    else if (totalAmount >= 1000 && totalAmount <= 5000) {
        discount = totalAmount * 0.10; 
    } 
    else {
        discount = totalAmount * 0.20; 
    }

    
    finalAmount = totalAmount - discount;

    
    printf("\n----- BILL SUMMARY -----\n");
    printf("Total Amount       : ₹%.2f\n", totalAmount);
    printf("Discount Applied   : ₹%.2f\n", discount);
    printf("Final Amount to Pay: ₹%.2f\n", finalAmount);

    return 0;
}
