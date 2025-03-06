#include <iostream>
#include <vector>
using namespace std;

void resort(int arr[])
{ 
    int size = sizeof(arr)/sizeof(arr[0]);
    int i =0 ; int j = size-1;
    while (i!=j)    
    {
        if(abs(arr[i]) > abs(arr[i+1])){
            swap(arr[i] , arr[i+1]);
            j--;
        }
        else if (abs(arr[i])> abs(arr[j]))
        {
            swap(arr[i] , arr[j]);
            j--; 
        }
    }
    
    
    
}

int main()
{
    int arr[] = {-8, -1, 0, 2, 3, 5, 6, 7, 8, 9};
    resort(arr);
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}