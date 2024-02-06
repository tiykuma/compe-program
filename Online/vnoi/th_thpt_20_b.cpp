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
ll n, a[1000000], res;
int main()
{
    freopen("CAU2.INP", "r", stdin);
    freopen("CAU2.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    unordered_map<ll, ll> c;
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        c[a[i]]++;
    }
    for (auto i : c) res = max(res, i.second);
    cout << res;
    return 0;
}