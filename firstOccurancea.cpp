#include <iostream>
using namespace std;

int firstoccurance(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int ans = -1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return ans;
}

int lastoccurance(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int ans = -1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        mid = (start + end) / 2;
    }
    return ans;
}

int main()
{
    int n, key;
    cout << "enter the no of elemenrs in array" << endl;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "enter the to search in array" << endl;
    cin >> key;
    int result = firstoccurance(arr, n, key);
    int result1 = lastoccurance(arr, n, key);
    cout << "the element " << key << " found at index " << result << " and " << result1;
}