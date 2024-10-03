#include <stdio.h>
#include <string.h>

int romanToInt(const char *s) {
    // Define a map for Roman numerals
    int value[256] = {0}; // Array to hold the values for each character

    value['I'] = 1;
    value['V'] = 5;
    value['X'] = 10;
    value['L'] = 50;
    value['C'] = 100;
    value['D'] = 500;
    value['M'] = 1000;

    int ans = 0;
    int length = strlen(s);

    for (int i = 0; i < length; i++) {
        // If the current value is less than the next value, subtract it
        if (i < length - 1 && value[s[i]] < value[s[i + 1]]) {
            ans -= value[s[i]];
        } else {
            ans += value[s[i]];
        }
    }

    return ans;
}

int main() {
    const char *roman = "MCMXCIV"; // Example input
    int result = romanToInt(roman);
    printf("The integer value of %s is %d\n", roman, result);
    return 0;
}
