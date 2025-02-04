#include <iostream>
using namespace std;
class animal
{
public:
    int age;
    int weight;

    void speak()
    {
        cout << "animal is speaking" << endl;
    }
    void speak1()
    {
        cout << "animal 1 is speaking" << endl;
    }
};

class dog : public animal
{
public:
    void speak()
    {
        cout << "dog is barking" << endl;
    }
};
// multilevel inheritence

class lab_dog : public dog
{
public:
    void speak1()
    {
        cout << "labra dog is barking" << endl;
    }
};
//multiple inheritence 

class cat{
    public:
    void speak(){
        cout<<"meowing"<<endl;
    }

};

class billi_kutta : public dog , public cat{

} ;

int main()
{
    animal a;
    a.speak();

    dog d;
    // using own method if not available then use parents method of same name
    d.speak();
    // using parents methods
    d.speak1();
    cout <<endl<<endl;
    //multilevel 
    lab_dog lab;
    lab.speak();
    lab.speak1();

    //multiple inheritence
  cout <<endl<<endl;
    billi_kutta b1;
    b1.speak1();
     //b1.speak(); ambigous cant find which method to call
     //solve by scope resolution operator 

     b1.dog::speak();
       b1.cat::speak();

    return 0;
}