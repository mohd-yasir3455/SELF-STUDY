// whenn class are inherited privately,
//  Public members of the base class become private in the derived class.
//  Protected members of the base class also become private in the derived class.
//  Private members of the base class are never inherited (they remain inaccessible).

#include <iostream>
using namespace std;

class A
{
protected:
    void add() { cout << "add() function of A" << endl; } // Protected
public:
    void show() { cout << "Public function of A" << endl; } // Public
};

class B : private A
{ // Private inheritance
public:
    void callShow() { show(); } // Allowed inside B
};

int main()
{
    B objB;

    objB.callShow(); // ✅ Allowed (calling A's public function indirectly)
      //  objB.show();      // ❌ Error (show() is private in B)
      // objB.add();       // ❌ Error (add() is private in B)

    return 0;
}
