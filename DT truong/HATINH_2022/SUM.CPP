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
 
ll n, q, s[1000000] = {0};

int main()
{
    fast_cin();
    freopen("SUM.INP", "r", stdin);
    freopen("SUM.OUT", "w", stdout);
    cin >> n >> q;
    ll a[n]; for (ll i = 0; i < n; i++) {
        cin >> a[i];
        s[i+1] = s[i] + a[i];
    }
    vector <pair<ll, ll>> h; 
    for (ll i = 0; i < q; i++) { 
        ll x, y; cin >> x >> y;
        h.pb(mp(x,y));
    }
    for (auto i : h) {
        if (i.se+i.fi-1<=n) cout << s[i.se+i.fi-1]-s[i.se-1] << endl;
        else {
            ll bd = i.se;
            ll lap = i.fi;
            ll ssd = bd - n*((bd > n ? bd/n : bd));
            ll s1 = s[n]-s[ssd-1];
            ll t = s[n]*((lap-(n-ssd))/n);
            ll ssc = lap - ((lap-(n-ssd))/n)*n-(n-ssd);
            ll s2 = (ssc > 0? s[ssc-1] : 0);
            cout << s1 + t + s2 << endl;
        }
    }
    return 0;
}