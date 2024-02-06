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
 
ll n, a[10000];

int main()
{
    freopen("TICHLONNHAT.INP", "r", stdin);
    freopen("TICHLONNHAT.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n; for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    if (a[0] * a[1] * a[n-1] > a[n-1] * a[n-2] * a[n-3]) cout << a[0] << ' ' << a[1] << ' ' << a[2];
    else cout << a[n-1] << ' ' << a[n-2] << ' ' << a[n-3];
    return 0;
}