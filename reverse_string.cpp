#include <iostream>
using namespace std;

void print(string &arr, int s, int e)
{
    for (int i = s; i < e; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void reverse(string &arr, int s, int e)
{
    // base case
    if (s > e)
    {
        return;
    }

    swap(arr[s++], arr[e--]);
    reverse(arr, s, e);
}

bool palindrome(string &arr, int s, int e)
{

    if (s > e)
    {
        return true;
    }

    if (arr[s++] != arr[e--])
    {
        return false;
    }
    else
    {
        return palindrome(arr, s, e);
    }
}
int main()
{
    string name = "string";

    //  reverse(name , 0 , name.length()-1);

    //  cout<<name<<endl;

    if (palindrome(name, 0, name.length() - 1))
    {
        cout << "the string is palindromic " << endl;
    }
    else
    {
        cout << "not a palindromic string";
    }

    return 0;
}