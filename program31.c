#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("My name is Jaymin\n");
    int size1, size2;

    
    printf("Enter initial size of article summary: ");
    scanf("%d", &size1);

  
    getchar();

    char *summary = (char *) calloc(size1, sizeof(char));
    if (!summary) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter the initial article summary:\n");
    fgets(summary, size1, stdin);

    printf("\nInitial Summary: %s\n", summary);

    
    printf("\nEnter new size for expanded summary: ");
    scanf("%d", &size2);
    getchar();

    summary = (char *) realloc(summary, size2 * sizeof(char));
    if (!summary) {
        printf("Memory reallocation failed.\n");
        return 1;
    }

    printf("Enter the expanded article summary:\n");
    fgets(summary, size2, stdin);

   
    printf("\nUpdated Summary: %s\n", summary);

    free(summary);

    return 0;
}
