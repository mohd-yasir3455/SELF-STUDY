#include <iostream>
using namespace std;

class teacher
{
private:
    double salary;
    teacher(int val)
    {
        cout << "i am the constructor" << endl;
    }

public:
    string name;
    string dept;
    int age;
    teacher()
    {
        cout << "i am theppp constructor" << endl;
    }
};

class student
{   public:
    int i ; 
    student()
    {
        cout << "i am the default  constructor" << endl;
    }

    student(int val =0)
    {
        cout << "i am the  parameterized constructor "<<val << endl;
    }
};

int main()
{      // student s; //ambiguity error because we have two constructor
        student s1(10); //use parameterized constructor with given value

    teacher ashok();

    return 0;
}