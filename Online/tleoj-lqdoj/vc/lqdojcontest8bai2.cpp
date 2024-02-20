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


ll n, a[1000000], sum, m, res, mi = 1e18;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        sum += 1LL * a[i];
    }
    sum = (long long) sum / n;
    sort(a, a + n);
    ll mid = n / 2;

    ll f1 = 0, f2 = 0;
    for (ll i = 0; i < mid; i++) {
        f1 += (sum - a[i]) * (sum - a[i]);
    }

    for (ll i = mid; i < n; i++) {
        f2 += (a[i] - sum) * (a[i] - sum);
    }

    res = f1 + f2;

    cout << res;
}
