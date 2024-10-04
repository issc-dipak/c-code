#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int threeSumClosest(int* nums, int numsSize, int target) {
    int closestSum = INT_MAX;
    // Sort the array
    qsort(nums, numsSize, sizeof(int), compare);
    
    for (int i = 0; i < numsSize; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) continue; // Skip duplicates
        int j = i + 1, k = numsSize - 1;
        
        while (j < k) {
            int sum = nums[i] + nums[j] + nums[k];
            if (sum == target) return sum; // Found exact match
            
            if (closestSum == INT_MAX || abs(target - sum) < abs(target - closestSum)) {
                closestSum = sum;
            }
            
            if (sum < target) {
                j++;
            } else {
                k--;
            }
        }
    }
    
    return closestSum;
}

int main() {
    int nums[] = {-1, 2, 1, -4};
    int target = 1;
    int result = threeSumClosest(nums, sizeof(nums)/sizeof(nums[0]), target);
    printf("The closest sum is: %d\n", result);
    return 0;
}
