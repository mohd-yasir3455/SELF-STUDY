// previous smallest number in a array

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "enter the size of array";
    cin >> n;
    int arr[n];
    cout << "enter the elements of array";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans[n];
     ans[0] = -1; // First element has no previous smaller element


    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
         ans[i] = -1; 
        for (int j = i-1; j >=0; j--)
        {
            if (arr[j] < key)
            {
                ans[i] = arr[j];
                break;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
       cout<<ans[i]<<" ";
    }
    

    return 0;
}