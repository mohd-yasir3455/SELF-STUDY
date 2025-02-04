#include <iostream>
#include <vector>
using namespace std;
int longestSubarray(vector<int> &nums)
{

    int ans = INT_MIN;
    int size = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        int val = 1;
        for (int j = i; j < nums.size(); j++)
        {
            val = val & nums[j];
            cout << "val is :" << val << ", i val " << i << ", j val " << j << endl;
            if (val >= ans)
            {
                ans = max(ans, val);
                size = max(size, j - i);
            }
        }
        cout << "next iteration" << endl;
    }
    return size + 1;
}
int main()
{
    vector<int> nums = {311155, 311155, 311155, 311155, 311155, 311155, 311155, 311155, 201191, 311155};
    longestSubarray(nums);

    return 0;
}