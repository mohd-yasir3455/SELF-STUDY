#include <iostream>
#include <math.h>
using namespace std;

int convert(int num)
{
    int i = 0;
    int ans = 0;
    while (num != 0)
    {
        int bit = num & 1;
        num = num >> 1;
        ans = bit * pow(10, i) + ans;
        i++;
    }
    return ans;
}


int main()
{
    int num;
    cin >> num;
    int ans = convert(num);
    cout << ans;
    cout <<~ans;

    return 0;
}