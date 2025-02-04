#include <iostream>
using namespace std;

int main()
{
    string s = "readwrite";
    int n = s.length();
    cout << (n ^ 1);

    return 0;
}