#include <stdio.h>
#include <math.h> 
int main() {
    float a, b;
    float root1, root2;

    printf("Enter coefficient a (for ax^2): ");
    scanf("%f", &a);
    printf("Enter coefficient b (for bx): ");
    scanf("%f", &b);

    if (a == 0) {
        if (b == 0) {
            printf("No solution exists.\n");
        } else {
            printf("The root is: x = 0\n");
        }
    } else {
        root1 = 0;  
        root2 = -b / a; 

        printf("The roots of the equation are: x1 = %.2f and x2 = %.2f\n", root1, root2);
    }

    return 0;
}
