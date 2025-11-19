#include <stdio.h>
#include <math.h>


void inputSides(float *a, float *b, float *c) {
    printf("Enter side a: ");
    scanf("%f", a);
    printf("Enter side b: ");
    scanf("%f", b);
    printf("Enter side c: ");
    scanf("%f", c);
}


int arePositive(float a, float b, float c) {
    if (a > 0 && b > 0 && c > 0)
        return 1;
    else
        return 0;
}


int isValidTriangle(float a, float b, float c) {
    if (a + b > c && a + c > b && b + c > a)
        return 1;
    else
        return 0;
}


float calculateArea(float a, float b, float c) {
    float s = (a + b + c) / 2.0;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    printf("My name is Jaymin\n");
    float a, b, c;

   
    inputSides(&a, &b, &c);

    
    if (!arePositive(a, b, c)) {
        printf("\nValid Triangle: No\n");
        printf("Message: \"Side lengths must be positive numbers.\"\n");
        return 0;
    }

    
    if (!isValidTriangle(a, b, c)) {
        printf("\nValid Triangle: No\n");
        printf("Message: \"The given lengths do not form a valid triangle.\"\n");
        return 0;
    }

    
    float area = calculateArea(a, b, c);

    printf("\nValid Triangle: Yes\n");
    printf("Area: %.2f\n", area);

    return 0;
}
