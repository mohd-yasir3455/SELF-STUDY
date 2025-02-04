#include <iostream>
#include <math.h>
using namespace std;
long int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

int power(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return 2 * power(n - 1);
}
void print(int n)
{
    if (n == 0)
    {
        return;
    }
    print(n - 1);
    cout << n << " ";
}

int main()
{
    int n, m;
    cout << "enter the no ";
    cin >> n;

    cout << "the factorial is " << factorial(n) << endl;

    cout << "the power of 2 is " << power(n) << endl;
    print(n);

    return 0;
}