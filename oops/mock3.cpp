#include <iostream>
using namespace std;
class student
{
public:
student(){
    cout<<"this is student calling";
}
};
class base : public student{
    public:
    base(){
        cout<<"this is base calling";
    }
};
int main()
{
    base s1;

    return 0;
}