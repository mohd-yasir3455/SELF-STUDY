#include <iostream>
using namespace std;
bool isPrime(int n)
{

       if (n == 1 || n == 0)
        return false;
    for (int i = 2; i < n; i++)
    {
        //to optimise it we can make search space to n/2 
        //agaian we can take under root on n to optimise 
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    for (int i = 0; i < 100; i++)
    {
        if (isPrime(i))
        {
            cout << i << " : is a prime no" << endl;
        }
    }

    return 0;
}