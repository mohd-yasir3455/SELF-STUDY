#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }
  for (int i = 0; i < arr.size(); i++) {
    for (int j = 1; j <= arr[i]; j++) {
      if (j % 3 == 0 && j% 5 == 0) {
        cout << "FizzBuzz"<<endl;
      } else if (j % 3 == 0) {
        cout << "Fizz"<<endl;
      } else if (j % 5 == 0) {
        cout << "Buzz"<<endl;
      } else {
        cout<<i<<endl;
      }
    }
  }
}
