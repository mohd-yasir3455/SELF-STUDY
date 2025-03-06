#include <iostream>
#include <stack>
#include <string>

using namespace std;
string remove_substr(string s , string part){
    int n = part.length();
    stack<char> st;

    for(char ch : s){
        st.push(ch);

        if( st.size()>=n ){
            string temp;
            for( int i = n-1 ; i >=0 ; i --){
                temp = st.top() + temp;
                st.pop();
            }
            if(temp != part){
                for(char ch : temp){
                    st.push(ch);
                }
            }
        }
    }
    string ans ; 

    while (!st.empty())
    {
        ans = st.top() + ans;
        st.pop();
    }
    return ans;
    
}

int main()
{

    string s = "geeksforgeeks";
    string x = "geeks";
    string ans = remove_substr(s, x);
    cout << ans << endl;
  return 0;
}
