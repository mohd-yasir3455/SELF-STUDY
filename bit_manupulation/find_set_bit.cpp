#include <iostream>
using namespace std;
int set(int n)
{
    int count = 0;
    while (n)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}
int main()
{
    cout << set(15);
    return 0;
}

