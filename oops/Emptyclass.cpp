#include <iostream>
using namespace std;

  class base
{
public:
      int a = 2;
    base()
    {
        cout << "I am the base class" << endl;
    }

     void fun(){
        cout<<"i am fun from base";
    }
};

class derived : public base
{
public:
     int a = 4;
    derived()
    {
        cout << "I am derived" << endl;
    }

     void fun(){
        cout<<"i am fun from derived";
    }
};

class deriderived : public derived
{
public:
     int a = 8;
    deriderived()
    {
        cout << "I am deri derived" << endl;
    }
    void fun(){
        cout<<"i am fun from deriderived";
    }
};

int main()
{
    deriderived *obj = new deriderived();
    cout << obj->a<<endl;
     obj->fun();
    // Don't forget to delete the dynamically allocated memory
     delete obj;

    return 0;
}
