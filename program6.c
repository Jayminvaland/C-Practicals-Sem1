#include<stdio.h>
int main() {
    printf("My name is Jaymin\n");
    float Fahrenheit,celsius;
    printf("Enter the temeperature in Celsius: ");
    scanf("%f",&celsius);
    Fahrenheit= (celsius*9/5)+32;
    printf("The temperature in Fahrenheit is %f",Fahrenheit);
    return 0;

}