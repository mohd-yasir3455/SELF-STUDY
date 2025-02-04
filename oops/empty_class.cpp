#include<iostream>
using namespace std; 

class abc {
    int val ; 
    char arr[20];
    static int count; // size of static variable is not included in the size of class object
};

// class abc{
//     //empty class size is 1 byte
// };
// class abc{
//     public:
//     int a; //if value is not assigned defualt value is 0
// };


int main(){
    abc obj;
    cout<<sizeof(obj)<<endl;
    return 0;
}