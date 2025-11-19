#include <stdio.h>

int main() {
    printf("My name is Jaymin\n");
    int num;
    int positive = 0, negative = 0;
    int even = 0, odd = 0;

    printf("Enter 25 integers:\n");

    for (int i = 1; i <= 25; i++) {

        printf("Enter number %d: ", i);
        scanf("%d", &num);

        
        if (num > 0)
            positive++;
        else if (num < 0)
            negative++;

        
        if (num % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("\n--- Statistics Report ---\n");
    printf("Total positive numbers: %d\n", positive);
    printf("Total negative numbers: %d\n", negative);
    printf("Total even numbers: %d\n", even);
    printf("Total odd numbers : %d\n", odd);

    return 0;
}
