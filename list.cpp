#include<iostream>
using namespace std;
#include<list>

int main()
{
    list<int> l ;
    l.push_front(12);
    l.push_front(23);

    l.push_front(24);

    for (int i: l)
    {
cout<<i<<" ";        
    }
    
    return 0;
}
