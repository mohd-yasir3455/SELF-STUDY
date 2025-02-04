#include<iostream>
using namespace std;
//compile time poly morphism 

// function overloading 
class A{
public:
void sayMyName(){
    cout<<"my name is poly morphism"<<endl;
}

void sayMyName(string name ){
    cout<<"my name is poly morphism  urf "<<name<<endl;
}
};

//operator overloading 
class B{
    public:
    int a ; 
    int b;

    int add(){
        return a+b;
    }


};

int main() {
  A a1;
  a1.sayMyName();
   a1.sayMyName("billu");



return 0 ;
}