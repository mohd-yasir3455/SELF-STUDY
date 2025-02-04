#include<iostream>
using namespace std;
class base
{
public:
    int a = 1;
    int s=0;

private:
    int b = 2;

protected:
    int c = 3;
};

class derived : protected base
{
    public:
    int a = 4;
    int f = s;
private:
    int b = 5;

protected:
    int c = 6;
};


int main() {
  
derived obj;
cout<<obj.f;


return 0 ;
}