#include <vector>
#include "VectorManipulation.h"

long long getSum(const std::vector<long long>& numbers) {
    long long sum = 0;
    for (int i = 0; i < numbers.size(); i++) {
        sum += numbers[i];
    }
    return sum;
}
