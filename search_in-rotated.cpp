#include <iostream>
using namespace std;

int pivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] > arr[e])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    }
    return s;
}

int binary(int arr[], int n, int start, int end, int key)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int k = 5;
    int n = 8;
    int arr[8] = {12, 22, 356, 1, 2, 3, 4, 5};
    int pivotIndex = pivot(arr, n);
    int ans;
    if (k >= arr[0] && k <= arr[n - 1])
    {
        ans = binary(arr, n, 0, n - 1, k);
    }
    else if (k >= arr[pivotIndex] && k <= arr[n - 1])
    {
        ans = binary(arr, n, pivotIndex, n - 1, k);
    }
    else
    {
        ans = binary(arr, n, 0, pivotIndex - 1, k);
    }

    cout << ans;
    return 0;
}
