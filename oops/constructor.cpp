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
    teacher(){
        cout<<"i am theppp constructor"<<endl;
    }
};

int main()
{

    teacher ashok();


    return 0;
}