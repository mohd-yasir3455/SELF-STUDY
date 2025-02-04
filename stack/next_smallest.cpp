#include <iostream>
#include <vector>
#include <stack>
#include <algorithm> 

using namespace std;

vector<int> next_smallest(vector<int> lst)
{
    stack<int> st;
    vector<int> ans;
    // dummy node
    st.push(0);
    int n = lst.size();
    for (int i = n - 1; i >= 0; i--)
    {
        if (lst[i] > st.top())
        {
            ans.push_back(st.top());
        }
        else
        {
            while (!st.empty() && lst[i] <= st.top())
            {
                st.pop();
            }
            ans.push_back(st.empty() ? -1 : st.top());
        }
        st.push(lst[i]);
    }
    reverse(ans.begin(), ans.end()); // Since we are storing in reverse order
    return ans;
}
vector<int> prev_smallest(vector<int> lst)
{
    stack<int> st;
    vector<int> ans;
    // dummy node
    st.push(0);
    int n = lst.size();
    for (int i = 0; i <n; i++)
    {
        if (lst[i] > st.top())
        {
            ans.push_back(st.top());
        }
        else
        {
            while (!st.empty() && lst[i] <= st.top())
            {
                st.pop();
            }
            ans.push_back(st.empty() ? -1 : st.top());
        }
        st.push(lst[i]);
    }
  
    return ans;
}

vector<int> next_greater(vector<int> lst)
{
    stack<int> st;
    vector<int> ans;
    // dummy node
    st.push(0);
    int n = lst.size();
    for (int i = n - 1; i >= 0; i--)
    {
        if (lst[i] < st.top())
        {
            ans.push_back(st.top());
        }
        else
        {
            while (!st.empty() && lst[i] >= st.top())
            {
                st.pop();
            }
            ans.push_back(st.empty() ? -1 : st.top());
        }
        st.push(lst[i]);
    }
    reverse(ans.begin(), ans.end()); // Since we are storing in reverse order
    return ans;
}



vector<int> prev_greater(vector<int> lst)
{
    stack<int> st;
    vector<int> ans;
    // dummy node
    st.push(0);
    int n = lst.size();
    for (int i = 0; i < n; i++)
    {
        if (lst[i] < st.top())
        {
            ans.push_back(st.top());
        }
        else
        {
            while (!st.empty() && lst[i] >= st.top())
            {
                st.pop();
            }
            ans.push_back(st.empty() ? -1 : st.top());
        }
        st.push(lst[i]);
    }

    return ans;
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> lst(n);
    vector<int> ans;
    int a;
    cout << "Enter the elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        lst[i] = a; // Store the input directly into lst
    }

   // ans = next_smallest(lst);
   ans= prev_smallest(lst);
   ans = next_greater(lst);
//    ans=prev_greater(lst);

    cout << "Next smallest elements are:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}
