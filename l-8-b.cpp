#include <iostream>

using namespace std;
int ap(int n, int r)
{

    int count = 0, count1 = 0;

    while (n != 0)
    {
        if (n & 1 == 1)
        {
            count++;
        }

        n = n >> 1;
    }

       while (r != 0)
    {
        if (r & 1 == 1)
        {
            count1++;
        }

        r = r >> 1;
    }
    return count + count1;
}

int main()
{
    int n, r;
    cout << "enter the value of N" << endl;
    cin >> n;
    cout << "enter the value of R" << endl;
    cin >> r;

    int answer = ap(n, r);

    cout << answer << " is sum of nth term ";
}