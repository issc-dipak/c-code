#include <stdio.h>

int main() {
    // Declare an array of integers
    int numbers[5] = {10, 20, 30, 40, 50};

    // Print the elements of the array
    printf("Array elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element at index %d: %d\n", i, numbers[i]);
    }

    // Calculate the sum of the array elements
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += numbers[i];
    }
    printf("Sum of array elements: %d\n", sum);

    // Find the maximum element in the array
    int max = numbers[0];
    for (int i = 1; i < 5; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    printf("Maximum element: %d\n", max);

    return 0;
}
