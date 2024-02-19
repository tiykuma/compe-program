//https://oj.vnoi.info/problem/mvector
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
    return (a.first - b.first > a.second - b.second);
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    vector<pair<ll, ll>> a;
    for (int i = 0; i < n; i++) {
        ll x, y; cin >> x >> y;
        a.pb(mp(x,y));
    }
    sort(a.rbegin(), a.rend(), comp);
    for (auto i : a) {
        cout << i.first << ' ' << i.second << endl;
    }
    return 0;
}