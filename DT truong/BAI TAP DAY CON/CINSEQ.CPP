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

ll n, k, a[100];

int main()
{
    freopen("CINSEQ.INP", "r", stdin);
    freopen("CINSEQ.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> a[i];
    int count = 0, res = 0;
    for (int i = 0; i < n-1; i++) {
        count++;
        if (count == k) {res++; count -= 1; continue;}
        if (a[i] > a[i+1]) count = 0;
    }
    cout << res;
    return 0;
}