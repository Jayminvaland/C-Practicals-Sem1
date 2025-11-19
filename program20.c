#include <stdio.h>

int main() {
    printf("My name is Jaymin\n");
    int N;
    printf("Enter number of participants (N): ");
    scanf("%d", &N);

    int sum = 0, id;

    printf("Enter %d participant IDs:\n", N - 1);
    for (int i = 0; i < N - 1; i++) {
        scanf("%d", &id);
        sum += id;
    }

    int total = N * (N + 1) / 2;
    int missing = total - sum;

    printf("Missing participant ID is: %d\n", missing);

    return 0;
}
