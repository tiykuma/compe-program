#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, a[1000000];
int main() {
    freopen("CNDK.inp", "r", stdin);
    freopen("CNDK.out", "w", stdout);
    cin >> n;
    for (ll i = 0; i < n; i++) {cin >> a[i];}
    for (ll i = (n-1)/2; i >1; i--) {
        if ((n-1)%i==0) {
            bool f=true;
            for (ll j = 0; j < n/i; j++) {
                if (a[j] != a[i+j]) {f=false; break;}
            }
            if (f) {cout << i; return 0;}
        }
    }
}