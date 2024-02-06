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
 
ll n, s, a[1000000], s1, l1, l2;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("LONGEST.INP", "r", stdin);
    freopen("LONGEST.OUT", "w", stdout);
    cin >> n >> s;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) {
        l1++; s1 += a[i];
        if (s1 > s) {s1 = 0; l1 = 0;}
        if (l2 < l1) l2 = l1; 
    }
    cout << l2;
    return 0;
}