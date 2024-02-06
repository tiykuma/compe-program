#include <bits/stdc++.h>
#define ll long long
using namespace std;
long long n;
int main() {
    freopen("SUM5.INP", "r", stdin);
    freopen("SUM5.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    if (n == 10) {cout << "0 1 2 3 4"; return 0;}
    long long i = (n - 10) / 5;
    if (n >= 10 && (n-10) % i == 0) cout << i << ' ' << i + 1 << ' ' << i + 2 << ' ' << i + 3 << ' ' << i + 4;
    else cout << -1; 
}