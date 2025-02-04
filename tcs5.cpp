#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "enter the string" << endl;
    cin >> str;
    int L;
    cin >> L;
    int count = 0;
    int val = INT_MIN;

    int start = 0;
    int j = 0;
    // check max no of consecutive a
    while (j < str.length())
    {
        for (j = start; j < (L + start) && j < str.length(); j++)
        {
            // check for max a in the window
            if (str[j] == 'a')
            {
                count++;
                val = max(count, val);
                //cout << val << endl << j<<endl;
            }
            else
            {
                count = 0;
            }
        }
        count =0;

        start += L;
    }
    cout << val ;

    return 0;
}