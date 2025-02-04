#include <iostream>

using namespace std;

class Grandparent {
public:
  Grandparent() {
    cout << "Grandparent constructor" << endl;
  }
  void Print() {
    cout << "Grandparent's Print()" << endl;
  }
};

class Parent : public Grandparent {
public:
  Parent() : Grandparent() { // Explicitly call base class constructor
    cout << "Parent constructor" << endl;
  }
  void Print() {
    cout << "Parent's Print()" << endl;
  }
};

class Child : public Parent {
public:
  Child() : Parent() { // Explicitly call base class constructor
    cout << "Child constructor" << endl;
  }
  void Print() {
    Grandparent::Print(); // Call Grandparent's Print function explicitly
    cout << "Child's Print()" << endl;
  }
};

int main() {
  Child c;
  c.Print();
  return 0;
}
