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

ll n, a[2000000], k, res;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> a[i];
    unordered_map<int, int> c;
    int l, r;
    for (l = r = 0; r < n; r++) {
        c[a[r]]++;
        while (c.size() > k) {
            c[a[l]]--;
            if (c[a[l]] == 0) c.erase(a[l]);
            ++l;
        }
        res += r-l+1;
    }
    cout << res;
    return 0;
}