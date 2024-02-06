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
#define fp freopen
#define se second
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
ll a, b, c, d;

int main()
{
    fast_cin();
    freopen("DOVUI.INP", "r", stdin);
    freopen("DOVUI.OUT", "w", stdout);
    cin >> a >> b >> c >> d;
    ll ca = (b/c)-(a-1)/c;
    ll da = (b/d)-(a-1)/d;
    ll lcm = (c*d)/(__gcd(c, d));
    ll res=ca+da - (b/lcm)-(a-1)/lcm;
    cout << res;
    return 0;
}