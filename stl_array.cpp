#include<iostream>
#include<array>
using namespace std;

int main(){

    array<int , 4>arr={1,2,3,4};

    int size = arr.size();

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"element at"<<arr.at(2)<<endl;
    cout<<"is array empty "<<arr.empty()<<endl;
    cout<<"the front element is  "<<arr.front()<<endl;

}