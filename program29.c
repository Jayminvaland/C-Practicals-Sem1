#include <stdio.h>
#include <string.h>


struct Coach {
    char name[50];
    int age;
    int experience;   
};

struct Team {
    char teamName[50];
    char sportType[30];
    struct Coach coach;
};

int main() {
    printf("My name is Jaymin");
    struct Team teams[50];  
    int count = 0;           
    int choice;

    while (1) {
        printf("\n===== CHARUSAT Sports Team Management =====\n");
        printf("1. Add New Team\n");
        printf("2. Search Team\n");
        printf("3. Display All Teams\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            
            printf("\n--- Add New Team ---\n");

            printf("Enter Team Name: ");
            scanf(" %[^\n]s", teams[count].teamName);

            printf("Enter Sport Type: ");
            scanf(" %[^\n]s", teams[count].sportType);

            printf("Enter Coach Name: ");
            scanf(" %[^\n]s", teams[count].coach.name);

            printf("Enter Coach Age: ");
            scanf("%d", &teams[count].coach.age);

            printf("Enter Coach Experience (years): ");
            scanf("%d", &teams[count].coach.experience);

            printf("\nTeam added successfully!\n");
            count++;
        }

        else if (choice == 2) {
            
            char searchName[50];
            printf("\nEnter Team Name to Search: ");
            scanf(" %[^\n]s", searchName);

            int found = 0;
            for (int i = 0; i < count; i++) {
                if (strcmp(teams[i].teamName, searchName) == 0) {
                    printf("\n--- Team Found ---\n");
                    printf("Team Name: %s\n", teams[i].teamName);
                    printf("Sport Type: %s\n", teams[i].sportType);
                    printf("Coach Name: %s\n", teams[i].coach.name);
                    printf("Coach Age: %d\n", teams[i].coach.age);
                    printf("Coach Experience: %d years\n", teams[i].coach.experience);
                    found = 1;
                    break;
                }
            }

            if (!found) {
                printf("Team not found!\n");
            }
        }

        else if (choice == 3) {
          
            printf("\n--- All Sports Teams ---\n");
            if (count == 0) {
                printf("No teams stored yet.\n");
            } else {
                for (int i = 0; i < count; i++) {
                    printf("\nTeam %d:\n", i + 1);
                    printf("Team Name      : %s\n", teams[i].teamName);
                    printf("Sport Type     : %s\n", teams[i].sportType);
                    printf("Coach Name     : %s\n", teams[i].coach.name);
                    printf("Coach Age      : %d\n", teams[i].coach.age);
                    printf("Experience     : %d years\n", teams[i].coach.experience);
                }
            }
        }

        else if (choice == 4) {
            printf("\nExiting system... Goodbye!\n");
            break;
        }

        else {
            printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
