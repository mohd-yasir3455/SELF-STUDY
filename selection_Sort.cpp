#include <iostream>
using namespace std;
void selection_sort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}
using namespace std;
// select the smallest element and place it right place
int main()
{
    int arr[10] = {12, 3, 1324, 1, 6, 8, -1, 1, 0, 65};

    selection_sort(arr, 10);

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i]<<" ";
    }

    return 0;
}