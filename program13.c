#include <stdio.h>

int main() {
    printf("My name is Jaymin\n");
    int waterLevel = 0;

    while (waterLevel < 100) {
        waterLevel += 10;    // Refill 10 liters per minute
        printf("Current water level: %d liters\n", waterLevel);
    }

    printf("Tank is full.\n");

    return 0;
}
