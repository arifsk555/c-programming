//program to calculate simple interest.
#include <stdio.h>

int main() {
    float principal, rate, time, simple_interest;

    // Input principal amount, rate of interest, and time period from the user
    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest (per year): ");
    scanf("%f", &rate);

    printf("Enter time period (in years): ");
    scanf("%f", &time);

    // Calculate simple interest
    simple_interest = (principal * rate * time) / 100;

    // Display the simple interest
    printf("Simple interest for principal %.2f at rate %.2f%% for %.2f years is: %.2f\n", principal, rate, time, simple_interest);

    return 0;
}

