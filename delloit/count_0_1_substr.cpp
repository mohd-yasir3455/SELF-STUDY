#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;
    
    int ans = 0; // To store the count of balanced substrings
    int c1 = 0, c2 = 0; // Counters for consecutive '0's and '1's
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '0') {
            c1++;
            if (c2 > 0) {
                ans += min(c1, c2); // Count balanced pairs
                c2 = 0;            // Reset c2 after pairing
            }
        } else if (s[i] == '1') {
            c2++;
            if (c1 > 0) {
                ans += min(c1, c2); // Count balanced pairs
                c1 = 0;            // Reset c1 after pairing
            }
        }
    }
    
    // Print the result
    cout << ans << endl;
    return 0;
}
