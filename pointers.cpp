#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 5, 3, 4, 5, 6};
    cout << *arr;
    cout << arr << endl;
    cout << &arr << endl;
    cout << &arr + 1 << endl;
    cout << *arr + 1 << endl;
    cout << "*---------*" << endl;
    cout << sizeof(arr) << endl;
    cout << sizeof(*arr) << endl;
    cout << sizeof(&arr) << endl;
    int *ptr = &arr[0];
    cout << "*---------*" << endl;
    cout << sizeof(ptr) << endl;
    cout << sizeof(*ptr) << endl;
    cout << sizeof(&ptr) << endl;

    return 0;
}