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
ll x, y, n, c;
int main()
{
    freopen("CAU1.INP", "r", stdin);
    freopen("CAU1.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> x >> y;
    ll gcd = __gcd(x, y);
    for (int i = 1; i <= sqrt(gcd); i++) {
        if (gcd % i == 0)  {
            if (gcd / i == i) c++;
            else c+= 2;
        }
    }
    cout << c;
    return 0;
}