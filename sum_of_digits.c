#include <stdio.h>

int sumDigits(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n % 10 + sumDigits(n / 10);
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Sum of all digits in %d is %d\n", n, sumDigits(n));
    return 0;
}
