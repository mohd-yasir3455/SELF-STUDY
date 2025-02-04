// shift an aaray by the given index
#include <iostream>
using namespace std;

void shift_array(int arr[], int n, int shift)
{
    for (int i = 0; i <= n / shift; i++)
    {
        swap(arr[i], arr[i + shift]);
    }
}

int main()
{

    int arr[] = {1,2,3,4,5,6,7};
    int shift;
    cout << "enter the index from which u want to shift the array" << endl;
    cin >> shift;
    cout << "original array" << endl;
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] <<" ";
    }
    cout<<endl;
    shift_array(arr, 7, shift);

    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] <<" ";
    }
}