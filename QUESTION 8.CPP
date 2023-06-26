#include <iostream>
#include <algorithm>

int minimumScore(int nums[], int size, int k) {
    int minScore = INT_MAX;

    // Step 1: Find the minimum and maximum elements
    int minVal = *std::min_element(nums, nums + size);
    int maxVal = *std::max_element(nums, nums + size);

    // Step 2: Calculate the initial score
    int initialScore = maxVal - minVal;
    minScore = std::min(minScore, initialScore);

    // Step 3-6: Consider modifications and update the score
    for (int i = 0; i < size; i++) {
        for (int x = -k; x <= k; x++) {
            int modifiedVal = nums[i] + x;
            minVal = std::min(minVal, modifiedVal);
            maxVal = std::max(maxVal, modifiedVal);
            int updatedScore = maxVal - minVal;
            minScore = std::min(minScore, updatedScore);
        }
    }

    return minScore;
}

int main() {
    int nums[] = {1};
    int size = sizeof(nums) / sizeof(nums[0]);
    int k = 0;
    int result = minimumScore(nums, size, k);
    std::cout << result << std::endl;  // Output: 0

    return 0;
}
