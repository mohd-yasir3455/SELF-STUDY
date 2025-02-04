#include <iostream>
using namespace std;

string arr[10] = {"zero ", "one ", "two ", "three ", "four ",
                  "five ", "six ", "seven ", "eight ",
                  "nine "};
void sayNo(int n)
{
    if (n == 0)
    {
        return;
    }
    int digit = n % 10;
    n = n / 10;
    sayNo(n);
    cout << arr[digit] << " ";
}

int main()
{
    int n;
    cin >> n;
    sayNo(n);

    return 0;
}