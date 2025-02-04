#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr = {15, 8, 6, 12, 14};
    int maxvalue = 15;
    int maxLength = 0;
    int sum = 0;
    int start = 0;

    for (int end = 0; end < arr.size(); ++end) {
        sum += arr[end];

        // Shrink the window if the sum exceeds maxvalue
        while (sum > maxvalue && start <= end) {
            sum -= arr[start];
            start++;
        }

        // Update maxLength if the current window length is greater
        maxLength = std::max(maxLength, end - start + 1);
    }

    std::cout << "The largest number of consecutive elements with sum <= " << maxvalue << " is: " << maxLength << std::endl;

    return 0;
}
