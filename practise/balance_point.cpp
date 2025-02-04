#include <iostream>

using namespace std;

int main()
{
    bool flag = false;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int suffix = 0;

    for (int i = 0; i < n; i++)
    {
        suffix += arr[i];
    }
    int prefix = 0;
    for (int i = 0; i < n; i++)
    {
        suffix -= arr[i];
        if (suffix == prefix)
        {
            flag = true;
            cout << "the balanced point is : " << i + 1;
            break;
        }
        prefix += arr[i];
    }
    if (!flag)
    {
        cout << "no balanced point is : ";
    }

    return 0;
}