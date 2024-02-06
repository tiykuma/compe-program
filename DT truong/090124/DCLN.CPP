#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, sum1=0, sum2=0, bd=0, kt=0, a[1000000];
int main() {
    freopen("dayso.inp", 'r', stdin);
    freopen("dayso.out", 'w', stdout);
    cin >> n;
    for (ll i = 0; i < n; i++) cin >> a[i];
    for (ll i = 0; i < n; i++) {
        sum1 += a[i];
        if (sum1 > sum2) {
            sum2 = sum1;
            kt = i;
        }
        if (sum1 < 0) {
            bd = i+1;
            sum1 = 0;
        }
    }
    cout << bd +1<< ' ' <<  kt+1 << endl << sum2;
    // for (int i = bd; i <= kt; i++) cout << a[i] << " ";
}