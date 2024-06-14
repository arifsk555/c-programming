//program to find sum and average of two numbers.
#include <stdio.h>

int main() {
    float num1, num2, sum, average;

    // Input two numbers from the user
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);

    // Calculate sum
    sum = num1 + num2;

    // Calculate average
    average = sum / 2;

    // Display the sum and average
    printf("Sum of %.2f and %.2f is: %.2f\n", num1, num2, sum);
    printf("Average of %.2f and %.2f is: %.2f\n", num1, num2, average);

    return 0;
}

