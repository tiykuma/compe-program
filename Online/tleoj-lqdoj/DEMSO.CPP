// https://lqdoj.edu.vn/problem/cnt00
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

ll x, n;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    unordered_map<ll, ll> a;
    cin >> n >> x;;
    for (int i = 0; i < n; i++) {
        ll h; cin >> h; a[h]++;
    }
    cout << a[x];
    return 0;
}