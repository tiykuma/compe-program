#include <bits/stdc++.h>
#define ll long long
using namespace std;

long long n, cp;

bool snt(ll n) {
    if (n < 2) return false;
    if (n == 2 || n == 3) return true;
    for (int i = 2; i <= sqrt(n); i++) if (n % i == 0) return false;
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);    
    cin >> n;
    long long m = n;
    while(true) {
        cp = sqrt(m);
        if (snt(cp) && cp * cp == m) {cout << m; return 0;}
        m++;
    }
}