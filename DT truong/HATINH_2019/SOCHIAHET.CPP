#include <bits/stdc++.h>
using namespace std;
long long l, h, a, b;
int main() {
    cin >> l >> h >> a >> b;
    long long lcm = a * b / __gcd(a, b);
    cout << (h-l) / lcm + 1;
}