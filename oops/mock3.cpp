#include <iostream>
using namespace std;
class student
{
public:
    student()
    {
        cout << "this is student calling" << endl;
    }
};
class base : public student
{
public:
    base()
    {
        cout << "this is base calling" << endl;
    }
};
int main()
{
    base s1;

    return 0;
}