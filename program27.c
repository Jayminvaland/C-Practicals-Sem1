#include <stdio.h>

int main() {
    printf("My name is Jaymin\n");
    int n;
    printf("Enter the number of months: ");
    scanf("%d", &n);

    
    if (n <= 0) {
        printf("Number of months must be positive.\n");
        return 0;
    }

    long long a = 1, b = 1, next;

    printf("\nSavings Series for %d Months:\n", n);

  
    if (n >= 1)
        printf("Month 1: ₹%lld\n", a);

   
    if (n >= 2)
        printf("Month 2: ₹%lld\n", b);

   
    for (int i = 3; i <= n; i++) {
        next = a + b;  
        printf("Month %d: ₹%lld\n", i, next);
        a = b;
        b = next;
    }

    return 0;
}
