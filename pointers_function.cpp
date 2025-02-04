#include <iostream>
using namespace std;
void peint(int *p)
{

    cout << *p << endl;
}
void update(int *p)
{
    p = p + 1;
}
int main()
{
    int value = 5;
    int *p = &value;
 
    peint(p);
    update(p);
    peint(p);

   
    return 0;
}