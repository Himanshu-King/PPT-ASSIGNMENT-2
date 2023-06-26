#include <iostream>

bool isMonotonic(int nums[], int size) {
    bool increasing = true;
    bool decreasing = true;

    for (int i = 1; i < size; i++) {
        if (nums[i] < nums[i - 1]) {
            increasing = false;
        }
        if (nums[i] > nums[i - 1]) {
            decreasing = false;
        }
    }

    return increasing || decreasing;
}

int main() {
    int nums[] = {1, 2, 2, 3};
    int size = sizeof(nums) / sizeof(nums[0]);
    bool result = isMonotonic(nums, size);
    std::cout << std::boolalpha << result << std::endl;  

    return 0;
}
