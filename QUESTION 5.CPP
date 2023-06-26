#include <iostream>
#include <algorithm>

int maximumProduct(int nums[], int size) {
    std::sort(nums, nums + size);  
    int product1 = nums[size - 1] * nums[size - 2] * nums[size - 3];  
    int product2 = nums[0] * nums[1] * nums[size - 1];  
    return std::max(product1, product2);
}

int main() {
    int nums[] = {1, 2, 3};
    int size = sizeof(nums) / sizeof(nums[0]);
    int result = maximumProduct(nums, size);
    std::cout << result << std::endl;  

    return 0;
}
