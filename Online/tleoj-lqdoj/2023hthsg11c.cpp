// https://lqdoj.edu.vn/problem/2023hthsg11c
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

ll n, k, a[1000000], dp[1000001], c[10000001];

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> k;
    dp[0] = a[0]; c[0] = 1; ll last = a[0];
    for (int i = 1; i < n; i++) {
        if (c[i-1] < k) {
            if (a[i] + a[i-1] > a[i-1]) {
                c[i] = c[i-1]+1;
                dp[i] = a[i] + a[i-1];
            }
        }
        else {
            dp[i] = max(dp[i], dp[i-2]);
            c[i] = 1;
        }
        debug(dp[i]);
        debug(c[i]);
    }
    return 0;
}