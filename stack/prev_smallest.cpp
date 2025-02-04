#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int n;
    cout << "enter the size of array";
    cin>>n;
    int arr[n];
    int ans[n];
    cout << "enter the elements of array";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    stack<int> st;
    st.push(-1);
    for (int i = 0; i < n; i++)
    {

        if (st.top() < arr[i])
        {
            ans[i] = st.top();
            st.push(arr[i]);
        }

        else
        {
            while (!st.empty() && st.top() >= arr[i])
                st.pop();
            ans[i] = st.top();
            st.push(arr[i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}