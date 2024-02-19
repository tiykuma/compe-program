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

ll n;

int comp(pair<ll, ll> a, pair<ll, ll> b) {
    return a.fi < b.fi;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    vector<pair<ll, ll>> a;
    for (ll i = 0; i < n; i++) {
        ll x; cin >> x; a.pb(mp(x, 0));
    }
    for (ll i = 0; i < n; i++) {
        ll x; cin >> x; a.pb(mp(x, 1));
    }
    ll c = 0;
    sort(a.begin(), a.end(), comp);
    for (ll i = 0; i < a.size()-1; i++) {
        if (a[i].se != a[i+1].se) {c++; i++;}
    }
    cout << c;
    return 0;
}