// Write a program in C to count the digits of a given number using recursion. >
#include <stdio.h>

int countDigits(int n) {
    if (n == 0) return 0; // Base case
    return 1 + countDigits(n / 10); // Recursive call
}

int main() {
    int n = 45658735;
    printf("Number of digits in %d: %d\n", n, countDigits(n));
    return 0;
}