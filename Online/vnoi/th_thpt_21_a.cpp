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

ll n, a, b;

int main()
{
    freopen("BAI1.INP", "r", stdin);
    freopen("BAI1.OUT", "w", stdout);
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> a >> b;
    if (a > b) cout << a-b << ' ';
    else cout << 0 << ' ';
    if (a + b <= n) cout << a;
    else cout << n - b;
    return 0;
}