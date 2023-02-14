#include <iostream>
#include <vector>

#include "VectorManipulation.h"

int main() {
    std::vector<long long> numbers = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    std::cout << "Sum: " << getSum(numbers) << std::endl;
    std::cout << "Avg: " << getAvg(numbers) << std::endl;

    return 0;
}