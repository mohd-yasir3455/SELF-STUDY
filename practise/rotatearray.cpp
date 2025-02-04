#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int k;
    vector<int> arr(n);
    cout << "enter the K" << endl;
    cin >> k;
    cout << "enter the elment of the array bitch" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int val;
    for (int i = 0; i < k; i++)
    {
        val = arr[0];
      
        for (int j = 0; j < n - 1; j++)
        {
            arr[j] = arr[j + 1];
        }
        arr[n-1] = val;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}