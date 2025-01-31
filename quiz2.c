
//2. Write a program in C to calculate the sum of numbers from 1 to n using recursion

#include <stdio.h>

int sum(int n) {
    if (n == 1) return 1; // Base case
    return n + sum(n - 1); // Recursive call
}

int main() {
    int n = 10;
    printf("Sum of numbers from 1 to %d: %d\n", n, sum(n));
    return 0;
}