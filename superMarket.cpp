#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int ans = 1;
    while (num > 0)
    {
        int digit = num % 10;
        num /= 10;
        ans = ans * digit;
    }
    cout<<ans;

    return 0;
}