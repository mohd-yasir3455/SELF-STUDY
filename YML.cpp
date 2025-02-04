#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            for (int j = 1; j <= n; j++) {
                cout << j << " ";
            }
        } else {
            cout << i << " 5";
        }
        cout << endl;
    }
    return 0;
}
