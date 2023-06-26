#include <iostream>
#include <algorithm>

int findLHS(int nums[], int n) {
    const int MAX_NUM = 1000000;
    int freq[MAX_NUM + 1] = {0}; 
    for (int i = 0; i < n; i++) {
        freq[nums[i]]++;  
    }

    int maxLen = 0; 
    for (int i = 0; i < MAX_NUM; i++) {
        if (freq[i] != 0 && freq[i + 1] != 0) { 
            int currLen = freq[i] + freq[i + 1];
            maxLen = std::max(maxLen, currLen); 
        }
    }

    return maxLen; 
}

int main() {
    int nums[] = {1, 3, 2, 2, 5, 2, 3, 7};
    int n = sizeof(nums) / sizeof(nums[0]);
    int result = findLHS(nums, n);
    std::cout << result << std::endl;  

    return 0;
}
