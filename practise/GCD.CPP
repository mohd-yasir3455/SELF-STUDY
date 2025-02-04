#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int oa = a;
    int ob = b;
    while (b != 0)
    {
        int rem = a % b;
        a = b;
        b = rem;
    }
    cout << "the GCD of given no is " << a << endl;

    int lcm = (oa * ob) / a;
    cout << "the LCM of the given no us " << lcm<<endl;


    int arr[2]= {1 ,2};
    cout<<arr<<endl;
    cout<<&arr[0];

    return 0;
}