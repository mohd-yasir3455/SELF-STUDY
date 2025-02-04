#include <iostream>
#include<string>

using namespace std;

int main()
{
    string str;
    int key;

    cout << "enter the string" << endl;
    cin >> str;
    cout << "enter the key : ";
    cin >> key;
    int n = str.length();

    string ans = "";

    for (int i = 0; i < n; i++)
    {
        if (65 <= str[i] && str[i] <= 90)
        {
            // means capital letter
            int index = (str[i] - 'A' + key) % 26;
            str[i] = 'A' + index;
        }
        else if (97 <= str[i] && str[i] <= 122)
        {
            // means capital letter
            int index = (str[i] - 'a' + key) % 26;
            str[i] = 'a' + index;
        }
        else
        {
            // means capital letter
            int index = (str[i] - '0' + key) % 10;
            str[i] = '0' + index;
        }
    }

    cout << "the resultant string is " << endl;
    cout << str;

    return 0;
}