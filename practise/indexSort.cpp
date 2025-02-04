#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<pair<int, int>> vec(n);
    for (int i = 0; i < n; i++)
    {
        vec[i] = (make_pair(arr[i], i));
    }
    sort(vec.begin(), vec.end());
 

    for (auto i : vec)
    {
        cout << i.second << " :";
    }

    return 0;
}