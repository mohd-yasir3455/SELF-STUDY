
#include<iostream>
using namespace std;

class A
{
int x;
public:
void setX(int i) {x = i;}
void print() { cout << x; }
};

class B: virtual public A
{
public:
B() { setX(10); }
};

class C: virtual public A 
{
public:
C() { setX(20); }
};
class E: virtual public A 
{
public:
E() { setX(30); }
};

class D:  public B,  public C ,  public E {
};

int main()
{
	D d;
	d.print();
	return 0;
}
//               #include<iostream>
// using namespace std;

// class A
// {
// int x;
// public:
// A(int i) { x = i; }
// void print() { cout << x; }
// };

// class B: virtual public A
// {
// public:
// B():A(10) { }
// };

// class C: virtual public A 
// {
// public:
// C():A(10) { }
// };

// class D: public B, public C {
// };

// int main()
// {
// 	D d;
// 	d.print();
// 	return 0;
// }


// C++ Program to illustrate the use of virtual inheritance
// to resolve the diamond problem in multiple inheritance
// #include <iostream>
// using namespace std;

// // Base class
// class Base {
// public:
//     void fun() { cout << "Base" << endl; }
// };

// // Parent class 1 with virtual inheritance
// class Parent1 : virtual public Base {
// public:
//      void fun() { cout << "pareant1" << endl; }
// };

// // Parent class 2 with virtual inheritance
// class Parent2 : virtual public Base {
// public:
//    void fun() { cout << "parent 2" << endl; }
// };

// // Child class inheriting from both Parent1 and Parent2
// class Child : public Parent1, public Parent2 {
// };

// int main()
// {
//     Child* obj = new Child();
//     obj->fun(); // No ambiguity due to virtual inheritance
//     return 0;
// }
