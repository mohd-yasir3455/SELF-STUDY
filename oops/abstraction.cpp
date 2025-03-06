#include <iostream>
using namespace std;

class animal
{
public:
    animal()
    {
        cout << "animal constructor" << endl;
    }
    virtual void sound() =0; // pure virtual function mandatory to create abstract class
    
};

class dog : public animal
{
public:
    void sound()
    {
        cout << "dog sound" << endl;
    };
};

int main()
{
    animal *a = new dog();
    a->sound();
    return 0;
}