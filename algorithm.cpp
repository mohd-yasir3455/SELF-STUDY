#include<iostream>
#include<algorithm>
#include<vector>

using namespace std ;

int main(){

    vector<int> v;
    v.push_back(1);
     v.push_back(4);
      v.push_back(32);
       v.push_back(0);
        v.push_back(98);

        for(auto i : v){
            cout<<i<<endl;
        }
//cheaking if 5 is present in it or not
        cout<<binary_search(v.begin(),v.end(),5);

}