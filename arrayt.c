#include <stdio.h>

int main() {
    // Declare an array of integers
    int numbers[5] = {10, 20, 30, 40, 50};
    int sum = 0;

    // Calculate the sum of the elements in the array
    for (int i = 0; i < 5; i++) {
        sum += numbers[i];
    }

    // Print the result
    printf("The sum of the array elements is: %d\n", sum);

    return 0;
}
