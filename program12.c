#include <stdio.h>
int main() {
    printf("My name is Jaymin\n");
    for (int i = 1; i <= 50; i++) {

        if (i % 5 == 0) {
            printf("Book ID: %d (Special Edition)\n", i);
        } else {
            printf("Book ID: %d\n", i);
        }
    }

    return 0;
}
