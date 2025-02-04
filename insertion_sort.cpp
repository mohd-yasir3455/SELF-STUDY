#include <iostream>
using namespace std;
void insertion(int arr[], int n)
{

    for (int i = 1; i < n; i++)
    {
        int j = i - 1;
        int temp = arr[i];
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] == arr[j];
            }
        }
        arr[j + 1] == temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[5] = {17, -1, 0, 18, 10};

    int n = 5;
    insertion(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}