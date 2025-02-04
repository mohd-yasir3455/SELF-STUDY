#include <iostream>
using namespace std;

void LinearSearch(int arr[], int n, int value)
{
    for (int i = 0; i < n; i++)
    {
        if (value == arr[i])
        {
            cout << "element present in the array at the index:" << i + 1 << endl;
        }
    }
}
//using recursion 
bool search(int arr[] , int size , int key){
    //base case
    if (size==0)
    {
        return false;
    }
    if (arr[0]==key)
    {
      return true;
    }
    else{
        bool ans = search(arr+1 , size-1 , key);
    }
    
    
}


int main()
{

    int n, value;
    cout << "enter the no of elements in array \n";
    cin >> n;
    int arr[n];
    cout << "enter the value of elements in array \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "enter the value to search in array \n";
    cin >> value;

   // LinearSearch(arr, n, value);

    bool ans = search(arr, n ,value);
    if (ans)
    {
     cout<<"element found"<<endl;
    }
    else{
         cout<<"element not found";
    }
    
}