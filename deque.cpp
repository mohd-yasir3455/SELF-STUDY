#include <iostream>
using namespace std;
#include <deque>

int main()
{
  deque<int> d;
  d.push_back(1);
  d.push_front(2);
  d.push_front(5);
  d.push_front(34);
  d.push_front(23);

  for (int i : d)
  {
    cout << i << " ";
  }
  cout << endl;
  d.pop_back();
  for (int i : d)
  {
    cout << i << " ";
  }
  cout << endl;

  cout << "first index element " << d.at(0);
  d.empty();
  d.erase(d.begin(), d.begin() + 1);
}

