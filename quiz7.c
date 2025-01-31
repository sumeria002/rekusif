//write a program in C to find GCD of two numbers using recusion
#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) return a; // Base case
    return gcd(b, a % b); // Recursive call
}

int main() {
    int a = 6, b = 8;
    printf("GCD of %d and %d: %d\n", a, b, gcd(a, b));
    return 0;
}