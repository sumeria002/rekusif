//write a program in C to get largest element of array using recursion
#include <stdio.h>

int findLargest(int arr[], int index, int size) {
    if (index == size - 1) return arr[index]; // Base case
    int max = findLargest(arr, index + 1, size); // Recursive call
    return (arr[index] > max) ? arr[index] : max;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Largest element: %d\n", findLargest(arr, 0, size));
    return 0;
}