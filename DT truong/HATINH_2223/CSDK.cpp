#include <bits/stdc++.h>
#define ll long long
using namespace std;
long long n, k, a[1000000], S[100000000], s[1000001];
int main() {
    freopen("CSDK.INP", "r", stdin);
    freopen("CSDK.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long count = 0; cin >> n >> k;
    for (ll i = 0; i < n; i++) {cin >> a[i]; s[i+1] = a[i] + s[i];}
    for (ll i = 0; i <= n; i++) {
        int r = s[i] % k;
        count += S[r];
        S[r]++;
    }
    cout << count;
}
