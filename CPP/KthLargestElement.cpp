using namespace std;
#include <iostream>
#include <vector>
#include <queue>

int findKthLargest(std::vector<int>& nums, int k) {
    std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;

    for (int i = 0; i < k; ++i) {
        minHeap.push(nums[i]);
    }

    for (int i = k; i < nums.size(); ++i) {
        if (nums[i] > minHeap.top()) {
            minHeap.pop();
            minHeap.push(nums[i]);
        }
    }

    return minHeap.top();
}

int main() {
    int n, k;
    std::cout << "Enter the number of elements in the array =  ";
    std::cin >> n;

    std::vector<int> nums(n);
    std::cout << "Enter the array elements = \n";
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }

    std::cout << "Enter the value of k =  ";
    std::cin >> k;

    if (k < 1 || k > n) {
        std::cout << "Invalid value of k. It should be between 1 and " << n << std::endl;
        return 1;
    }

    int result = findKthLargest(nums, k);
    std::cout << "The " << k << "th largest element is = " << result << std::endl;

    return 0;
}
