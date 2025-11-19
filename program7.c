#include <stdio.h>

int main() {
    printf("My name is Jaymin\n");
    int age;
    const int TICKET_PRICE = 300;  

    printf("Enter visitor age: ");
    scanf("%d", &age);

    if(age < 12) {
        printf("Entry is free! Enjoy your visit.\n");
    } else {
        printf("You are an adult. Ticket price = Rs %d\n", TICKET_PRICE);
    }

    return 0;
}
