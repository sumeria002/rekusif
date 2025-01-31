
// 1. Write a program in C to print the first 50 natural numbers using recursion.

#include <stdio.h>

void printNumbers(int n) {
    if (n <= 50) {
        printf("%d\n ", n);
        printNumbers(n + 1); // Recursive call
    }
}

int main() {
    printNumbers(1); // Start from 1
    return 0;
}