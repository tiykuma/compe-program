#include <bits/stdc++.h>

using namespace std;

bool check(int n) {
    int temp = 0, ref = n;
    while (ref != 0) {
        temp = temp * 10 + (ref % 10);
        ref /= 10;
    }
    return (__gcd(temp, n) == 1 ? true : false);
}

int main() {
    int a, b, count = 0; cin >> a >> b;
    for (int i = a; i <= b; i++) if (check(i)) count++;
    cout << count;
}