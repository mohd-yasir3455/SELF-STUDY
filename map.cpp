#include<iostream>
#include<map>
using namespace std;

int main(){

    map<int , string> s;

    s[1]="love";
    s[2]="kumar";
    s.insert({3,"babbar"});
    s.insert({4,"love"});
cout<<"before erase"<<endl;
    for(auto i : s){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<"finding the element "<<s.count(12)<<endl;
    cout<<"finding the element "<<s.count(4)<<endl;

    cout<<"after erase"<<endl;
    s.erase(4);

     for(auto i : s){
        cout<<i.first<<" "<<i.second<<endl;
    }
}