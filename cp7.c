//Program to convert temperature from Fahrenheit to Celsius and vice versa.

#include <stdio.h>

// Function to convert Fahrenheit to Celsius
float fahrenheit_to_celsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

// Function to convert Celsius to Fahrenheit
float celsius_to_fahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    float temperature;
    int choice;

    printf("Temperature Conversion\n");
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &temperature);
            printf("Temperature in Celsius: %.2f\n", fahrenheit_to_celsius(temperature));
            break;
        case 2:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &temperature);
            printf("Temperature in Fahrenheit: %.2f\n", celsius_to_fahrenheit(temperature));
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}

