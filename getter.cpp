#include <iostream>
using namespace std;

class hero
{
    // by defualt the access modifier is private
private:
    int health;
    string name;

public:
    int gethealth()
    {
        return health;
    }
    string getname()
    {
        return name;
    }
    void sethealth(int h)
    {
        health = h;
    }
    // we can add condititon
    void setname(string n)
    {

        name = n;
    }
};

int main()
{
//static allocation
    hero h1;
    h1.sethealth(60);
    h1.setname("rame");
    cout << h1.gethealth() << endl;
    cout << h1.getname() << endl;

    //dynamic allocation
    hero *h2 = new hero; 
    (*h2).sethealth(90);
    cout<<"h2 health is "<<h2->gethealth();



    return 0;
}