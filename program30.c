#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int isValidNumber(char *str) {
    int dotCount = 0;
    int i = 0;

    if (str[0] == '-' || str[0] == '+')
        i = 1;

    for (; str[i] != '\0'; i++) {
        if (str[i] == '.') {
            dotCount++;
            if (dotCount > 1)
                return 0;
        }
        else if (!isdigit(str[i])) {
            return 0;
        }
    }

    return 1;
}


void swap(float *a, float *b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}


void sortPrices(float *ptr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (*(ptr + j) < *(ptr + i)) {
                swap(ptr + i, ptr + j);
            }
        }
    }
}

int main() {
    printf("My name is Jaymin\n");
    int n;
    char input[50];

    printf("Enter number of items: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Error: \"No items to sort.\"\n");
        return 0;
    }

    float *prices = (float *) malloc(n * sizeof(float));

    printf("Enter %d prices:\n", n);

    for (int i = 0; i < n; i++) {
        scanf("%s", input);

        
        int valid = 1;
        int dotCount = 0;
        int k = 0;

        if (input[0] == '-' || input[0] == '+')
            k = 1;

        for (; input[k] != '\0'; k++) {
            if (input[k] == '.') {
                dotCount++;
                if (dotCount > 1) valid = 0;
            } else if (!isdigit(input[k])) {
                valid = 0;
            }
        }

        if (!valid) {
            printf("Error: \"Invalid input for price. Please enter numeric values only.\"\n");
            free(prices);
            return 0;
        }

        prices[i] = atof(input);
    }

   
    sortPrices(prices, n);

    
    printf("Sorted Prices: ");
    for (int i = 0; i < n; i++) {
        printf("%.2f", *(prices + i));
        if (i != n - 1) printf(", ");
    }
    printf("\n");

    free(prices);

    return 0;
}
