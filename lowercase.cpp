#include<iostream>
#include<string>
using namespace std;

int main(){
    string s = "A man, a plan, a canal: Panama";
    string temp = "";

    for (int i = 0; i < s.length(); i++)
    {
       if(s[i] >= 'a' && s[i] <= 'z'){
           temp += s[i];
       }
       else if(s[i] >= 'A' && s[i] <= 'Z'){
        temp += s[i]-'A'+'a';
       }
    }
    cout << temp<<endl<<temp.length();

    return 0;
}
