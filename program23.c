#include <stdio.h>

int maxProfit(int prices[], int n) {
    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < n; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        } else if (prices[i] - minPrice > maxProfit) {
            maxProfit = prices[i] - minPrice;
        }
    }
    return maxProfit;
}

int main() {
    printf("My name is Jaymin\n");
    int prices1[] = {20, 25, 15, 30, 10, 50};
    int prices2[] = {10, 8, 6, 4, 2};
    int prices3[] = {100, 180, 260, 40, 535, 695};
    int prices4[] = {30, 20, 25, 40};
    int prices5[] = {5, 5, 5, 5, 5};
    printf("Test case 1: %d\n", maxProfit(prices1, 6)); 
    printf("Test case 2: %d\n", maxProfit(prices2, 5)); 
    printf("Test case 3: %d\n", maxProfit(prices3, 6)); 
    printf("Test case 4: %d\n", maxProfit(prices4, 4)); 
    printf("Test case 5: %d\n", maxProfit(prices5, 5)); 
    return 0;
}

