#include <iostream>

using namespace std;

int main()
{

    // reverse an array
    int a[10] = {0,1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int n = sizeof(a) / sizeof(a[0]);

    int j = n -1;
    // for (int i = 0; i <= n / 2; i++)
    // {
    //     swap(a[i], a[j]);
    //     j--;
    // }

    // for (int k = 0; k < n; k++)
    // {
    //     cout << a[k] << endl;
    // }


//reverse from an index 
int m ;
cout<<"enter the index from where u want to reverse the array"<<endl;
cin>>m;
    for (int i = m+1; i < n / 2; i++)
    {
        swap(a[i], a[j]);
        j--;
    }

    for (int k = 0; k < n; k++)
    {
        cout << a[k] << " ";
    }
}
