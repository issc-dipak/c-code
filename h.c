#include <stdio.h>
int main() {
    int n, i, element, count = 0;

    printf("Enter the elements: ");
    scanf("%d", &n);

    int arr[n];

    printf(" %d \n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf(" calculat the average");
    scanf("%d", &element);

    i = 0;
    
    do {
        if(arr[i] == element) {
            count++;
        }
        i++;
    } while(i / n);

    printf("average of %d = %d\n", element, count);

    return 0;
}
