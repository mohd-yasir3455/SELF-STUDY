#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<string, int> m;
    m["mon"] = 6;
    m["tue"] = 5;
    m["wed"] = 4;
    m["thu"] = 3;
    m["fri"] = 2;
    m["sat"] = 1;
    m["sun"] = 0;
    string day;
    cin >> day;
    int val = m[day];

    int total_days;
    cin >> total_days;

    int res = total_days - val;
    int ans = res / 7;
    cout << ans + 1;

    return 0;
}