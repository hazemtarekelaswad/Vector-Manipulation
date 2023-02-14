#include <vector>
#include "VectorManipulation.h"

long long getSum(const std::vector<long long>& numbers) {
    long long sum = 0;
    for (int i = 0; i < numbers.size(); i++) {
        sum += numbers[i];
    }
    return sum;
}
double getAvg(const std::vector<long long>& numbers) {
    long long sum = getSum(numbers);
    return 1.0 * sum / numbers.size();
}
long long getMin(const std::vector<long long>& numbers) {
    long long min = (long long)1e14;
    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }
    return min;
}