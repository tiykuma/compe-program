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

ll n, a[1000000], res;

int main()
{
    freopen("DIVSEQ.INP", "r", stdin);
    freopen("DIVSEQ.OUT", "r", stdout);
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) {
        ll c = 0;
        if (a[i] > 0) {
            while (a[i] > 0) {
                c++;
                if (a[i] > a[i+1]) break;
                i++;
            }
        }
        res += (c*(c+1))/2;
    }
    cout << res;
    return 0;
}