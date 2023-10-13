// File Name: Reverse_Integer.cpp

#include <iostream>
#include <climits>

class Solution {
public:
    int reverse(int x) {
        const int INT_MAX = 2147483647;
        const int INT_MIN = -2147483648;

        long long result = 0;
        while (x != 0) {
            int pop = x % 10;
            x /= 10;

            result = result * 10 + pop;

            if (result > INT_MAX || result < INT_MIN) {
                return 0;
            }
        }

        return static_cast<int>(result);
    }
};

int main() {
    Solution solution;

    // Taking input from the user
    int x;
    std::cout << "Enter an integer: ";
    std::cin >> x;

    // Using the reverse method from the Solution class
    int reversed = solution.reverse(x);

    // Displaying the result
    std::cout << "Reversed integer: " << reversed << std::endl;

    return 0;
}
