#include <stdio.h>

int main() {
    int a = 10, b = 20, number;

    if (a < b) {
        printf("Example 1: a is less than b\n");
    } else {
        printf("Example 1: a is not less than b\n");
    }

    if (a == 10) {
        printf("Example 2: a is 10\n");
    } else {
        printf("Example 2: a is not 10\n");
    }

    printf("Enter a number for Example 3: ");
    scanf("%d", &number);
    if (number % 2 == 0) {
        printf("Example 3: The number is even\n");
    } else {
        printf("Example 3: The number is odd\n");
    }

    if (a + b > 25) {
        printf("Example 4: The sum of a and b is greater than 25\n");
    } else {
        printf("Example 4: The sum is 25 or less\n");
    }

    if (a > 0 && b > 0) {
        printf("Example 5: Both a and b are positive\n");
    } else {
        printf("Example 5: At least one of a or b is not positive\n");
    }

    if (a > 5 || b > 25) {
        printf("Example 6: Either a is greater than 5 or b is greater than 25\n");
    } else {
        printf("Example 6: Both conditions are false\n");
    }

    if (a != b) {
        printf("Example 7: a is not equal to b\n");
    } else {
        printf("Example 7: a is equal to b\n");
    }

    if (number < 100) {
        printf("Example 8: number is less than 100\n");
    } else {
        printf("Example 8: number is 100 or more\n");
    }

    if (a == 10 && b == 20) {
        printf("Example 9: a is 10 and b is 20\n");
    } else {
        printf("Example 9: The condition is not met\n");
    }

    if ((a + b) % 2 == 0) {
        printf("Example 10: The sum of a and b is even\n");
    } else {
        printf("Example 10: The sum is odd\n");
    }

    if (a > 0) {
        printf("Example 11: a is positive\n");
    } else if (a < 0) {
        printf("Example 11: a is negative\n");
    } else {
        printf("Example 11: a is zero\n");
    }

    if (number > 50 && number <= 100) {
        printf("Example 12: number is between 51 and 100\n");
    } else {
        printf("Example 12: number is outside this range\n");
    }

    if (b > 15) {
        if (a > 5) {
            printf("Example 13: b is greater than 15 and a is greater than 5\n");
        } else {
            printf("Example 13: b is greater than 15 but a is 5 or less\n");
        }
    }

    if (number % 5 == 0) {
        printf("Example 14: number is divisible by 5\n");
    } else {
        printf("Example 14: number is not divisible by 5\n");
    }

    if (a > 0 || b < 0) {
        printf("Example 15: a is positive or b is negative\n");
    } else {
        printf("Example 15: Neither condition is met\n");
    }

    if (a >= 10) {
        printf("Example 16: a is 10 or greater\n");
    } else {
        printf("Example 16: a is less than 10\n");
    }

    if (a == 0) {
        printf("Example 17: a is zero\n");
    } else {
        printf("Example 17: a is not zero\n");
    }

    if (b % 2 == 0) {
        printf("Example 18: b is even\n");
    } else {
        printf("Example 18: b is odd\n");
    }

    if (number > 0) {
        printf("Example 19: number is positive\n");
    } else {
        printf("Example 19: number is negative or zero\n");
    }

    if (a == 10 && b == 20 && number > 5) {
        printf("Example 20: a is 10, b is 20, and number is greater than 5\n");
    } else {
        printf("Example 20: One or more conditions are not met\n");
    }

    return 0;
}
