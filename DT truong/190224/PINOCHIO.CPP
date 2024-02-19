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

ll n, a[1000000];

int comp(ll a, ll b) {
    return a > b;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n, comp);
    ll diff = 0;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] == a[i+1]) {
            continue;
        }
        a[i+1] = abs(a[i] - a[i+1]);
    }
    cout << a[n-1];
    return 0;
}