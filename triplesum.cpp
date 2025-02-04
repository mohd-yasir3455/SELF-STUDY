#include <iostream>

using namespace std;

int main()
{
    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};
    int ans[n];
    // show the elements whose sum is 12

    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; i < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == 12)
                {
                    cout << arr[i] << " " << arr[j] << " " << arr[k]; 
                }
            }
        }
    }
}
