#include <stdio.h>

int main() {
    printf("My name is Jaymin\n");
    int rows = 5, seats = 10;
    int theatre[5][10] = {0};
    int n, r, s;

    printf("Enter the number of reserved seats: ");
    scanf("%d", &n);

   
    for (int i = 0; i < n; i++) {
        printf("Enter row and seat number for reserved seat %d (e.g., 2 5): ", i + 1);
        scanf("%d %d", &r, &s);

        
        if (r >= 1 && r <= rows && s >= 1 && s <= seats) {
            theatre[r - 1][s - 1] = 1;
        }
    }

    
    printf("\nSeating Chart:\n");

    for (int i = 0; i < rows; i++) {
        printf("Row %d: ", i + 1);
        for (int j = 0; j < seats; j++) {
            if (theatre[i][j] == 1)
                printf("X ");
            else
                printf("0 ");
        }
        printf("\n");
    }
    return 0;
}
