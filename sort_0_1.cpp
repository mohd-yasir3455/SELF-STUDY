#include <iostream>
using namespace std;

int main()
{

    int arr[8] = {1, 0, 0, 0, 1, 1, 1, 1};
    int n = 8;
    int j = 8;
    // all zeros are in left and 1's are in right
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            i++;
        }
        else if (arr[j] == 1)
        {
            j--;
        }
        else if (arr[i] == 1)
        {
            j--;
        }
        else if (arr[i] == 1 && arr[j] == 0)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}
