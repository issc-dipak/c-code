#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    FILE *inputFile = fopen("input.txt", "r");

    fscanf(inputFile, "%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        fscanf(inputFile, "%d", &arr[i]);
    }
    fclose(inputFile);

    for (int i = 0; i < n - 1; i++)
    {
        int index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[index])
            {
                index = j;
            }
        }
        int temp = arr[index];
        arr[index] = arr[i];
        arr[i] = temp;
    }

    printf("Sorted Array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}