#include <iostream>
using namespace std;

class A {
public:
    A() {
        cout << "Constructor of A" << endl;
    }
    // virtual 
     ~A() {  // Virtual destructor for proper cleanup
        cout << "Destructor of A" << endl;
    }
};

class B : public A {
public:
    B() {
        cout << "Constructor of B" << endl;
    }
    ~B() {
        cout << "Destructor of B" << endl;
    }
};

class C : public B {
public:
    C() {
        cout << "Constructor of C" << endl;
    }
    ~C() {
        cout << "Destructor of C" << endl;
    }
};

int main() {
    A* obj = new C();  // Creating an object of derived class C using a base class pointer
    delete obj;        // Deleting the object, which triggers destructor calls
    return 0;
}


//Because A has a virtual destructor, all destructors in the hierarchy are called in reverse order of construction, ensuring proper cleanup of the object. If A didn't have a virtual destructor, only A's destructor would be called, skipping the destructors of B and C, leading to potential resource management issues.






