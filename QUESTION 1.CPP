#include <iostream>
#include <algorithm>

int arrayPairSum(int nums[], int n) {
    std::sort(nums, nums + n);  

    int max_sum = 0;  

    for (int i = 0; i < n; i += 2) {  
        max_sum += nums[i];
    }

    return max_sum;  
}

int main() {
    int nums[] = {1, 4, 3, 2};
    int n = sizeof(nums) / sizeof(nums[0]);

    int result = arrayPairSum(nums, n);
    std::cout << result << std::endl;  

    return 0;
}
