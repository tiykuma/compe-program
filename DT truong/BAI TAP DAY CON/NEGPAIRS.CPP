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
 
ll n, a[1000000], c;

int main()
{
    freopen("CINSEQ.INP", "r", stdin);
    freopen("CINSEQ.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    unordered_map<int, int> m;
    cin >> n; for (int i = 0; i < n; i++) {cin >> a[i]; m[a[i]]++;}
    for (auto i : m) {
        if (i.first > 0) c += m[0 - i.first] * m[i.first];
        if (i.first == 0) c += (i.se * (i.se-1))/2;
    }
    cout << c;
    return 0;
}