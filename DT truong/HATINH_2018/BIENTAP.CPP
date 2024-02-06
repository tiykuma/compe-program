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

ll n, demo;

int main()
{
    freopen("BIENTAP.INP", "r", stdin);
    freopen("BIENTAP.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    demo = 1;
    while (demo * 2 < n) demo *= 2;
    if (demo * 2 == n) demo = n;
    if (n - demo > n - (demo / 2 * 3) && n - (demo / 2 * 3) > 0) demo = demo / 2 * 3;
    cout << ll(n - demo);
    return 0;
}