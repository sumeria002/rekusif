//write a program in C to find the factorial of a number using recursion
#include <stdio.h>

int factorial(int n) {
    if (n == 0) return 1; // Base case
    return n * factorial(n - 1); // Recursive call
}

int main() {
    int n = 5;
    printf("Factorial of %d: %d\n", n, factorial(n));
    return 0;
}