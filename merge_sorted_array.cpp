#include <iostream>
#include <vector>
using namespace std;
void merge(int arr1[], int n, int arr2[], int m, int arr3[])
{
    int i = 0, j = 0;
    int k =0;
    
    while (i < n && j < m) 
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }
    // copy remaining object of the array1
    while (i < n)
    {
        arr3[k++] = arr1[i++];
    }
    // copy remaining object of array2
    while (j < m)
    {
        arr3[k++] = arr2[j++];
    }
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr1[] = {1, 5, 7, 9};
    int arr2[] = {2, 4, 6, 8};
    int arr3[8] ={0};

    merge(arr1, 4, arr2, 4, arr3);
    print(arr3, 8);
}
