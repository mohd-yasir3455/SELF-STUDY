#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> result(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> ans(arr.begin(), arr.end());
    sort(ans.begin(), ans.end());
    unordered_map<int, int> mp;
    for (auto i = 0; i < ans.size(); i++)
    {
        mp[ans[i]] = i;
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = mp[arr[i]];
    }
    for (auto i : arr)
    {
        cout << i << " :";
    }

    return 0;
}
