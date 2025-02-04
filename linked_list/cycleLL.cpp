#include<iostream>
#include <stack>
using namespace std;

int main() {
  

class Solution {
public:
    int calculate(string s) {
        stack<int>st;
        for(int i =s.length()-1 ; i >=0; i--){
            if(s[i]==' '){
                continue;
            }
             if(s[i]=='+'){
                int b = st.top();
               
                st.pop();
                int a = s[i-1] -'0';
                int n = a+b;
                cout<<a<<" "<<b;
                st.push(n);
                cout<<st.top();
             }
               
            st.push(s[i]-'0');


            
        }
        return st.top();
     }
};

return 0 ;
}