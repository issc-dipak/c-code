#include <stdio.h>

int main() {
    int n, i, j, temp;

    // Accept the number of elements from the user
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Accept the array elements from the user
    printf("Enter %d elements: \n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Bubble sort algorithm
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap the elements if they are in the wrong order
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // Output the sorted array
    printf("Sorted array in ascending order: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
