// return the no of which have k set bits with value less than n

#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        int temp = i;
        while (temp > 0)
        {
            if (temp & 1)
            {
                count++;
            }
            temp = temp >> 1;
        }
        if (count == k)
        {
            ans++;
        }
    }
    cout << ans;
    
    return 0;
}