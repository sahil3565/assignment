#include <stdio.h>

// Define the 'State' structure
struct State {
    char name[50];
    int population;
    float lit_rate;
    float income;
};

int main() {
    // Declare a structure variable 'st1' and assign values
    struct State st1;
    
    // Assign values to the structure members
    strcpy(st1.name, "Maharashtra");
    st1.population = 1000000;
    st1.lit_rate = 5.8;
    st1.income = 6000.00;

    // Display the values assigned to the 'st1' structure variable
    printf("State Name: %s\n", st1.name);
    printf("Population: %d\n", st1.population);
    printf("Literacy Rate: %.1f\n", st1.lit_rate);
    printf("Income: $%.2f\n", st1.income);

    return 0;
}
