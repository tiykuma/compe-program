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


ll n, a[1000000], sum, m, res;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    sum /= n; ll min = LLONG_MAX;
    for (ll i = 0; i < n; i++) {
        if ((sum - a[i] >= 0 && sum-a[i] < min)) {min = sum-a[i]; m = a[i];}
    }
    sum = 0;
    for (ll i = 0; i < n; i++) {
        sum += (a[i] - m) * (a[i] - m);
        // debug(sum);
    }
    // res = 1000000000000000000;
    // for (int i = 0; i < n; i++) {
    //     ll sum = 0;
    //     for (int j = 0; j < n; j++) {
    //         sum += (a[j] - a[i]) * (a[j] - a[i]);
    //     }
    //     if (sum < res) res = sum;
    // }
    cout << sum;
}