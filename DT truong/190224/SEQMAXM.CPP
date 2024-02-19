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

ll n, m, a[1000000];

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m; 
    ll curr_sum = 0, max_len = 0, len=0, max_sum = 0;
    for (int i = 0; i < n; i++) cin >> a[i];
    ll l = 0, r = 0;
    while (r < n) {
        if (curr_sum + a[r] <= m) {
            curr_sum += a[r];
            r++;
        }
        else {
            curr_sum -= a[l];
            l++;
        }
        max_len = max(max_len, r-l);
    }
    cout << max_len;
    return 0;
}