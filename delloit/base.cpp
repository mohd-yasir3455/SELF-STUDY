#include <bits/stdc++.h>
using namespace std;

long long countCommas(long long n) {
    long long count = 0;
    long long base = 1'000;  // 1,000 is the first point where commas start
    int commas = 1;  // First comma starts at 1,000

    while (n >= base) {
        long long upperBound = min(n, base * 1000 - 1);  // Limit to the current range
        count += (upperBound - base + 1) * commas;  // Count commas in this range
        base *= 1000;  // Move to the next range
        commas++;  // Increase comma count
    }

    return count;
}

int main() {
    long long n;
    cin >> n;
    cout << countCommas(n) << endl;
    return 0;
}
