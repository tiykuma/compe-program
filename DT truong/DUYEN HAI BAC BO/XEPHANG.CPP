#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define ln "\n"
#define debug(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second

ll n, p[2000], a[2000];

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    pair<ll, ll> res[n];
    ll x[n], MIN[n], MAX[n];
    for (int i = 0; i < n; i++) cin >> p[i];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) {
        x[i] = pow(2, p[i]) + pow(2, a[i]);
    }
    for (int i = 0; i < n; i++) {
        MIN[i] = x[i] + 2;
        MAX[i] = x[i] + pow(2, n);
    }
    unordered_map<ll, ll> mi, ma;
    for (int i = 0; i < n; i++) {
        mi[MIN[i]] = i;
        ma[MAX[i]] = i;
    }
    sort(MIN, MIN + n);
    sort(MAX, MAX + n);
    for (int i = 0; i < n; i++) {
        // ll ds = mi[MIN[i]], fd = ma[MAX[i]];
        // if (ds == fd) ++fd; 
        cout << MIN[i] << ' ' << MAX[i] << endl;
    }
    // for (auto i : mi) cout << i.se << endl;
    // // }
    return 0;
}