#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> st;
    int n;
    cout << "enter the no of elements" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        st.push(num);
    }
cout<<"deleting the middle element : "<<n/2 <<endl;
int count =0;

if (count==n/2){
    st.pop();
    return ;
}
int num = st.top();
st.pop(); 
//recursive call 
}  