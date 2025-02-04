#include <iostream>
#include <vector>
#include <string>

class Solution {
public:
    bool isValid(std::string s) {
        std::vector<char> arr;
        int top = -1;
        for (int i = 0; i < s.length(); i++) {
            

            if (s[i] == ')' && top >= 0 && arr[top] == '(' ||
                s[i] == '}' && top >= 0 && arr[top] == '{' ||
                s[i] == ']' && top >= 0 && arr[top] == '[') {
                
                arr.pop_back();
                top--;
            }
            std::cout << "s[i]: " << s[i] << " arr: ";
            for (char c : arr) {
                std::cout << c;
            }
            std::cout << " top: " << top << std::endl;
        }
        if (top == -1) {
            return true;
        }
        return false;
    }
};

int main() {
    Solution sol;
    std::string input = "]";
    std::cout << "Is valid: " << std::boolalpha << sol.isValid(input) << std::endl;
    return 0;
}
