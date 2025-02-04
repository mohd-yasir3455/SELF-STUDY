#include <iostream>
#include <vector>
using namespace std;

void solve(string s, vector<string> &ans, int index, string temp)
{
    if (index == s.length())
    {
        ans.push_back(temp);
        return;
    }

    temp.push_back(s[index]);
    solve(s, ans, index + 1, temp);
    temp.pop_back();
    solve(s, ans, index + 1, temp);
}

void display(vector<string> ans)
{
    for (auto &val : ans)
    {
        cout << val << ", ";
    }
    cout<<endl;
}

int main()
{

    string s = "abcd";
    vector<string> ans;
    string temp = "";

    solve(s, ans, 0, temp);
    display(ans);
    cout << ans.size();

    return 0;
}