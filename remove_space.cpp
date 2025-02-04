#include <iostream>
#include <string>

using namespace std;

int main()
{

    string temp;
    string t = "";
    getline(cin, temp);
    // pushing at the end
    for (int i = 0; i < temp.size(); i++)
    {
        if (temp[i] == ' '){
            t.push_back('@');
        t.push_back('4');
        t.push_back('0');}
    else t.push_back(temp[i]);
    }
cout << t;
}

