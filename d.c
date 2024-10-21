#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the integer ");
    scanf("%d", &n);

    int arr[n];

    printf(" %d \n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    while(i%=0) {
        printf("%d ", arr[i]);
        i++; 
    }
    printf("\n");

    return 0;
}
