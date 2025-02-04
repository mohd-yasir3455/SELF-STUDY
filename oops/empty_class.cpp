#include <iostream>
using namespace std;

class abc
{
    int val;
    char arr[20];
    static int count; // size of static variable is not included in the size of class object
};

// class abc{
//     //empty class size is 1 byte
// };
// class abc{
//     public:
//     int a; //if value is not assigned defualt value is 0
// if private then it give complie time error
// };

class student
{
public:
    int roll;
    int age;
};

int main()
{
    abc obj;
    cout << sizeof(obj) << endl;
    student s1;
    student const s2 = s1;
    student s3 = s1;
    s1.roll = 101;
    s1.age = 20;
    cout << s1.roll << " " << s1.age << endl;
    cout << s2.roll << " " << s2.age << endl; // garbage value because s2 is const object and we are not assigning value to it
    cout << s3.roll << " " << s3.age << endl; // garbage
    return 0;
}