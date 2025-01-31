//write a program in C to fin dsum of digits of number using recursion
#include <stdio.h>

int sumOfDigits(int n) {
    if (n == 0) return 0; // Base case
    return (n % 10) + sumOfDigits(n / 10); // Recursive call
}

int main() {
    int n = 12345;
    printf("Sum of digits of %d: %d\n", n, sumOfDigits(n));
    return 0;
}