#include<iostream>
using namespace std;
#include<vector>

int main(){

    vector<int > v ;
    cout<<"the memory allocated now is "<<v.capacity()<<endl;;
    v.push_back(12);
      v.push_back(7);
        v.push_back(52);
        v.push_back(45);
        v.push_back(6);
          cout<<"the memory allocated now is "<<v.capacity();
           v.clear();

              cout<<"the memory allocated now is "<<v.capacity();


              vector<int> a (2,1);
              cout<<endl;

             for(int i :a){
              cout<<i<<" ";
             }
               cout<<endl;
             vector<int> last(a);

             for(int i :last){
              cout<<i<<" ";
             }

}