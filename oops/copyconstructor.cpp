#include <iostream>
using namespace std;

class student
{
public:
    string name;
    double *cgpaptr;
    student()
    {
    }

    student(string name, double cgpa)
    {
        this->name = name;
        // create memory for the pointer
        cgpaptr = new double;
        *cgpaptr = cgpa;
    }
    // custom copy constructor
    student(student &obj)
    {
        this->name = obj.name;
        // create new memory for the copy constructor so it can make deep copy
        cgpaptr = new double;
        *cgpaptr = *obj.cgpaptr;
    }
    void getInfo()
    {
        cout << this->name << endl
             << this->cgpaptr << endl;
    }
};

class person {
    public:
    string name = "rahul" ;
    void getInfo(){
        cout<<this->name;
    }
};
class worker : public person{
    public :
    string name = "aman";
    void getInfo(){
         cout<<this->name;
    }

};


int main()
{
    student s1("rahul", 9.1);
    student s2(s1);
    s2.name = "cheetah";
   
    s1.getInfo();
    s2.getInfo();
    worker w;
    w.getInfo();
   

    return 0;
}