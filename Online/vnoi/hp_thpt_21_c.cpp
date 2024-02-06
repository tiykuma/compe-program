#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, k; cin >> n >> k;
    unordered_map <ll, int> check;
    ll a[n]; for (ll i = 0; i < n; i++) {
        cin >> a[i];
        check[a[i]] = i+1;
    }
    for (ll i = 0; i < n; i++) {
        if (check[k*2-a[i]]>0) {cout << i+1 << ' ' << check[k*2-a[i]]; return 0;}
    }
    cout << "0 0";
    return 0;
}
