#include <iostream>
#include <utility>
#include <vector>

int gcd(int x, int y) {
    if (y == 0) {
        return x;
    }
    return gcd(y, x % y);
}

int main() {
    // Make a vector of inputs
    const std::vector<std::pair<int, int>> tests = {
        {20, 30},
        {15, 25},
        {8, 12},
        {10, 21},
        {3000, 18}
    };

    // Iterate through inputs vector to test the gcd function
    for (const auto& test : tests) {
        std::cout << "GCD of " << test.first << " and " << test.second
                  << " is " << gcd(test.first, test.second) << '\n';
    }

    return 0;
}
