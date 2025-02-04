#include <iostream>
using namespace std;
int fibonnacciNo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return (fibonnacciNo(n-1)+fibonnacciNo(n-2));
}
int main()
{
    int n = 10;
    int a = 0;
    int b = 1;

    cout << a << " " << b << " ";
    for (int i = 0; i < n; i++)
    {
        int nextno = a + b;
        cout << nextno << " ";
        a = b;
        b = nextno;
    }
    cout<<endl;
    cout <<"the fibonacci no is "<<fibonnacciNo(3)<<endl;
}