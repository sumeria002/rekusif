//Write a program in C to print the array elements using recursion.
#include <stdio.h>

void printArray(int arr[], int index, int size) {
    if (index >= size) return; // Base case
    printf("%d ", arr[index]);
    printArray(arr, index + 1, size); // Recursive call
}

int main() {
    int arr[] = {11, 12, 13, 14, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, 0, size);
    return 0;
}