#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the no of person" << endl;
    cin>>n;
    int val = 1;
    for (int i = 1; i < n; i++)
    {
        val *= i;
    }
    cout << 2*val;

    return 0;
}