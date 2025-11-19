#include <stdio.h>
int main() {
    printf("My name is Jaymin\n");
    int seconds;

    printf("Enter starting number of seconds: ");
    scanf("%d", &seconds);

    if (seconds < 0) {
        printf("Invalid input! Seconds cannot be negative.\n");
        return 0;
    }

    while (seconds >= 0) {
        printf("Time left: %d seconds\n", seconds);
        seconds--;
    }

    printf("Countdown completed!\n");

    return 0;
}
