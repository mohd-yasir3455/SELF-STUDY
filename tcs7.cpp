#include <iostream>
using namespace std;

int digit_sum(int num)
{
    int val = 0;
    while (num != 0)
    {
        int digit = num % 10;
        num /= 10;
        val += digit;
    }
    return val;
}
int main()
{
    int num, R;
    cin >> num >> R;

    int ans = digit_sum(num);
    int val = R * ans;

    while (val >=10)
    {
        val = digit_sum(val);
    }

cout << "the ans is :" << val;
    

    return 0;
}