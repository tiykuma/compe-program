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
    
ll n;

int main()
{
    fast_cin();
    freopen("LINE.INP", "r", stdin);
    freopen("LINE.OUT", "w", stdout);
    cin >> n;
    vector<pair<ll, ll>> x;
    for (ll i = 0; i < n; i++) {
        ll a, b; cin >> a >> b;
        x.push_back(make_pair(a, b));
    }
    sort(x.begin(), x.end());
    vector<pair<ll, ll>> res;
    ll Ma = -1000000001, Mi=1000000001;
    for (ll i = 0; i < n-1; i++) {
        // if (x[i])
        if (x[i].se <= x[i+1].fi) {
            res.pb(mp(x[i].fi, x[i].se));
            res.pb(mp(x[i+1].fi, x[i+1].se));
        }
    }
    cout << res.size() << endl;
    ll count = 0;
    for (ll i = 0; i < res.size(); i++) {
        if (res[i]!=res[i-1]) count++;
    }
    cout << count << endl;
    for (ll i = 0; i < res.size(); i++) {
        if (res[i]!=res[i-1]) {cout << res[i].fi << ' ' << res[i].se << endl;}
    }
    return 0;
}