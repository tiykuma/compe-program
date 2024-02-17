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

ll a[1000000], s[1000001], n, k, sum, c;

int main()
{
    // freopen("BRIDGE.INP", "r", stdin);
    // freopen("BRIDGE.OUT", "w", stdout);
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    unordered_map<int, int> amo;
    cin >> n >> k; 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        s[i+1] = s[i] + a[i];
        amo[s[i+1]]++;
    }
    for (int i = 1; i <= n; i++) {
        if (s[i] - k == 0) ++c; 
        if (amo[s[i] - k] != 0) ++c;
    }
    cout << c;
    return 0;
}