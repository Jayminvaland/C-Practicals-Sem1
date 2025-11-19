#include <stdio.h>

int main() {
    printf("My name is Jaymin\n");
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if(age >= 18) {
        printf("You are eligible to open a savings account.\n");
    } else {
        printf("Sorry, you are not eligible to open a savings account yet.\n");
    }

    return 0;
}
