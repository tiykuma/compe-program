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

ll n, k, a[100000], res; 

int main()
{
    freopen("CHIANHOM.INP", "r", stdin);
    freopen("CHIANHOM.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> k;
    for (ll i = 0; i < n; ++i) cin >> a[i];
    sort(a, a + n);
    res = 1; 
    for (ll i = 0; i < n-1; ++i) {
        if (a[i+1] - a[i] > k) {
            ++res;
        }
    }
    cout << res;
    return 0;
    
}