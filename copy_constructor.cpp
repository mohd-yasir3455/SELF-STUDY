#include <iostream>
#include<string.h>
using namespace std;
class hero
{   public:
    int health;
    char level;
    char name[];
    // parameterized constructor
    hero(int health, char level , char name[])

    {  strcpy(this->name , name);
        this->health = health;
        this->level = level;
    }
    //copy constructor
    // hero(hero& temp){
    //      strcpy(this->name , temp.name);
    //     this->health = temp.health +5;
    //     this->level = temp.level;
    // } 

    void print (){
        cout <<"the name is "<<this->name<<endl;
        cout<<"the health is "<< this->health<<endl;
        cout<<"the level  is "<<this->level<<endl;
    }
};

int main()
{
    hero suresh(29, 'A' , "suresh");

    //copy constructor 
    hero ramesh(suresh);

    suresh.print();
    ramesh.print();
    cout<<endl<<endl;

    suresh.name[0]='g';

      suresh.print();
    ramesh.print();


    return 0;
}