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
ll n, a[1000000], g_rec;
unsigned long long f_rec, sum_max;

int main()
{
    freopen("TONGLONNHAT.INP", "r", stdin);
    freopen("TONGLONNHAT.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (ll i = 0; i < n; ++i) cin >> a[i];
    for (ll i = 0; i < n; ++i) {
        f_rec += a[i];
        g_rec += abs(a[i]);
        if (f_rec + g_rec < 0) {
            f_rec = 0;
            g_rec = 0;
        }
        if (f_rec + g_rec > sum_max) sum_max = f_rec + g_rec;
    }
    cout << sum_max;
    return 0;
}