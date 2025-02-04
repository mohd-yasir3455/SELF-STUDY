#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    
    // Input array elements
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> ans;  // To store the repeating elements

    // Loop to find repeating elements
    for (int i = 0; i < n; i++)
    {
        int val = arr[i];
        int count = 0;

        // Count occurrences of the current value in the array
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == val)
                count++;
        }

        // If the element repeats and is not already in the answer vector
        if (count > 1)
        {
            // Use std::find to check if 'val' is already in 'ans'
            if (find(ans.begin(), ans.end(), val) == ans.end())
            {
                ans.push_back(val);
            }
        }
    }

    // Print the repeating elements
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
