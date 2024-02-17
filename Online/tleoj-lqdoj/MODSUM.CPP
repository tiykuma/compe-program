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

ll n, a[1000], s[1001], p, x, c;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> p >> x;
    for (int i = 0; i < n; ++i) {cin >> a[i]; s[i+1] = s[i] + a[i];}
    for (int i = 0; i <= n; ++i) {
        for (int j = i + 1; j <= n; ++j) {
            debug((s[j] - s[i]));
            if ((s[j] - s[i] - p) % x == 0) ++c;
        }
    }
    cout << c;
    return 0;
}