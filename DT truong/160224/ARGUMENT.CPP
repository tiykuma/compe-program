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

ll n, k, a[50000], res = -1;

int main()
{
    freopen("ARGUMENT.INP", "r", stdin);
    freopen("ARGUMENT.OUT", "w", stdout);
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> k;
    unordered_map<int, vector<int>> h;
    for (int i = 0; i < n; i++) {cin >> a[i]; h[a[i]].push_back(i);}
    for (auto i : h) {
        for (int j = 0; j < i.second.size() - 1; ++j) {
            if (a[j+1] - a[j] < k) {
                if (i.first > res) res = i.first;
                break;
            }
        }
    }
    cout << res;
    return 0;
}