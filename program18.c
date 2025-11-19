#include <stdio.h>

int main() {
    printf("My name is Jaymin\n");
    int vertical, horizontal;

    printf("Enter the size of table vertically: ");
    scanf("%d", &vertical);

    printf("Enter the size of table horizontally: ");
    scanf("%d", &horizontal);

    printf("\nMultiplication Table (%d x %d):\n\n", vertical, horizontal);

    
    for (int j = 1; j <= horizontal; j++) {
        printf("%4d", j);
    }
    printf("\n");

    
    for (int i = 1; i <= vertical; i++) {
        for (int j = 1; j <= horizontal; j++) {
            printf("%4d", i * j);
        }
        printf("\n");
    }

    return 0;
}
