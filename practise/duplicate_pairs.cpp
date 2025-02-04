#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "enter the no of elements: ";
    cin >> n;
    vector<pair<int, int>> arr;
    vector<pair<int, int>> ans;
    for (int i = 0; i < n; i++)
    {
        cout << "enter the " << i << "th pair value";
        int a, b;
        cin >> a >> b;
        arr.push_back(make_pair(a, b));
    }

    // finding the duplicate pairs
    for (int i = 0; i < n; i++)
    {
        int a = arr[i].first;
        int b = arr[i].second;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j].second == a && arr[j].first == b)
            {
                ans.push_back(make_pair(a, b));
                continue;
            }
        }
    }

    // display the pairs
    for (auto it : ans)
    {
        cout << "(";
        cout << it.first << "," << it.second;
        cout << ") ";
    }

    return 0;
}