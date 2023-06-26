#include <iostream>

int maxCandies(int candyType[], int n) {
    bool candies[200001] = { false };  

    int uniqueCount = 0;

    for (int i = 0; i < n; i++) {  
        if (!candies[candyType[i] + 100000]) {  
            candies[candyType[i] + 100000] = true;  
            uniqueCount++;  
        }
    }

    return std::min(uniqueCount, n / 2);  
}

int main() {
    int candyType[] = {1, 1, 2, 2, 3, 3};
    int n = sizeof(candyType) / sizeof(candyType[0]);
    int result = maxCandies(candyType, n);
    std::cout << result << std::endl;  

    return 0;
}
