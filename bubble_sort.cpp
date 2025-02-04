#include <iostream>
using namespace std;
void bubble(int arr[], int n)
{

    bool swapped = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        cout << "iteration" << i + 1 << endl;

        if (swapped == false)
        {
            break;
        }
    }
}

void Recursive_bubble(int* arr , int n ){
    //base case
    if (n==0 || n==1)
    {
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>arr[i+1])
        {
          swap(arr[i],arr[i+1]);
        }
        
    }
    Recursive_bubble(arr+1  , n-1);
    
}
int main()
{

    int arr[5] = {17, -1, 0, 18, 10};

    int n = 5;
    //bubble(arr, n);
    Recursive_bubble(arr , n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
