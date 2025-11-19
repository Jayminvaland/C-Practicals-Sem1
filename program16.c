#include <stdio.h>

int main() {
    printf("My name is Jaymin\n");
    int matchsticks = 21;
    int user_pick, computer_pick;

    printf("Welcome to the Matchstick Game!\n");
    printf("Rules: Pick 1 to 4 matchsticks. The one who picks the last matchstick loses.\n\n");

    while (matchsticks > 1) {
        printf("Matchsticks remaining: %d\n", matchsticks);

        
        printf("Your turn! Pick 1, 2, 3, or 4 matchsticks: ");
        scanf("%d", &user_pick);

        
        if (user_pick < 1 || user_pick > 4) {
            printf("Invalid choice! Try again.\n");
            continue;
        }

        matchsticks -= user_pick;  

        
        if (matchsticks == 1) {
            printf("\nOnly 1 matchstick left!\n");
            printf("You are forced to pick the last matchstick.\n");
            printf("❌ You lose! Computer wins!\n");
            break;
        }

        
        computer_pick = 5 - user_pick;
        matchsticks -= computer_pick;

        printf("Computer picks %d matchsticks.\n\n", computer_pick);

        
        if (matchsticks == 1) {
            printf("Computer is forced to pick the last matchstick.\n");
            printf("🎉 You win! (But this should never happen!)\n");
            break;
        }
    }

    return 0;
}
