#include <stdio.h>
int main() {
    printf("My name is Jaymin\n");
    int n = 4;

    
    for (int i = 1; i <= n; i++) {

    
        for (int s = 0; s < n - i; s++) {
            printf(" ");
        }

        
        for (int j = 0; j < i; j++) {
            printf("%c", 'A' + j);
        }

    
        for (int j = i - 2; j >= 0; j--) {
            printf("%c", 'A' + j);
        }

        printf("\n");
    }

    
    for (int i = n - 1; i >= 1; i--) {

        
        for (int s = 0; s < n - i; s++) {
            printf(" ");
        }

        
        for (int j = 0; j < i; j++) {
            printf("%c", 'A' + j);
        }

        
        for (int j = i - 2; j >= 0; j--) {
            printf("%c", 'A' + j);
        }

        printf("\n");
    }

    return 0;
}



