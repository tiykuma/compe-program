#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
#define mp make_pair
#define pb push_back
#define fi first
#define se second

ll n, k, a[1000000], b[1000000], l, r, sum, diff, res;

int main()
{
    freopen("SUBSEQ.INP", "r", stdin);
    freopen("SUBSEQ.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> k;
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (l= 0, r=0; r < n; r++) {
        m[a[r]]++;
        while (m.size() > k) {
            m[a[l]]--;
            if (m[a[l]] == 0) {
                m.erase(a[l]);
            }
            l++;
        }
        res += (r - l + 1);
    }
    cout << res; 
}