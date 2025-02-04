#include <iostream>
using namespace std;

class A
{
protected:
    void fun()
    {
        cout << "i am fun";
    }

public:
    int a = 3;
};

class B : private A{

};

int main()
{
    B obj ;
    obj.fun();
    cout << obj.a;

    return 0;
}