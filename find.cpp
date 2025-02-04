#include <iostream>
#include <vector>
#include <algorithm> // For std::sort

using namespace std;

int main() {
    string name = "my name is yasir";

    vector<string> str = {"flight", "flower", "flowen", "float"};
    
    // Sort the vector
    sort(str.begin(), str.end());

    // Print the sorted vector
    for (const auto& s : str) {
        cout << s << endl;
    }

    return 0;
}
