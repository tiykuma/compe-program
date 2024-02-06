#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef long double ld;
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

ll n, m, s[1000001], a[1000000];

bool snt(int n)
{
    if (n == 2 || n == 3)
        return true;
    if (n < 3 || n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

int main()
{
    unordered_set<int> nt;
    fast_cin();
    cin >> n >> m;
    ll max = 0;
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        if (max < a[i]) max = a[i];
        s[i+1] = s[i] + a[i];
    }
    for (int i = 2; i <= max * max; i++) if (snt(i)) nt.insert(i);
    vector <pair<ll, ll>> p;
    for (ll i = 0; i < m; i++) {
        ll u, v; cin >> u >> v;
        p.pb(mp(u, v));
    }
    for (auto i : p) {
        cout << (nt.find(s[i.se] - s[i.fi-1]) != nt.end() ? 1 : 0) << endl;
    }
    // for (auto i : nt) cout << i;
    return 0;
}