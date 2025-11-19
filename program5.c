#include <stdio.h>
int main() {
    printf("My name is Jaymin\n");
    
    double population = 1441981744;
    double women_percent = 48.4;
    double men_percent = 100 - women_percent;
    double men_literacy = 80.95;
    double women_literacy = 62.84;


    double men = (population * men_percent) / 100;
    double women = (population * women_percent) / 100;

    double literate_men = (men * men_literacy) / 100;
    double literate_women = (women * women_literacy) / 100;

    double illiterate_men = men - literate_men;
    double illiterate_women = women - literate_women;


    printf("Total Population of Bharat (2024): %.0f\n", population);
    printf("Number of Men: %.0f\n", men);
    printf("Number of Women: %.0f\n\n", women);

    printf("Literate Men: %.0f\n", literate_men);
    printf("Illiterate Men: %.0f\n", illiterate_men);
    printf("Literate Women: %.0f\n", literate_women);
    printf("Illiterate Women: %.0f\n", illiterate_women);

    return 0;
}
