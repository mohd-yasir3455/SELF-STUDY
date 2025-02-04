#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int D, X;
    cin >> D >> X;
    int even = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
    }
    int ans =0;

    if( D%2==0){
        ans = (n - even)*X;

    }
    else{
        ans = even*X;
    }
    cout <<"the penelty is :"<< ans;
    cout <<even;

    return 0;
}