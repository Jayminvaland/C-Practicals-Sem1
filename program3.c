
#include<stdio.h>
int main() {
    printf("My name is jaymin\n");
    float weight,height,BMI;
    printf("Enter your weight(in kg):");
    scanf("%f",&weight);
    printf("Enter your height(in m): ");
    scanf("%f",&height);
    BMI= weight/(height*height);
    printf("Your BMI is %f\n",BMI);
    return 0;

}
