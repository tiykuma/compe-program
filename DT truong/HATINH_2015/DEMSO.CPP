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
 
ll n, a[1000000];

int main()
{
    freopen("DEMSO.INP", "r", stdin);
    freopen("DEMSO.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    unordered_set<ll> fib;
    cin >> n; for (int i = 0; i < n; i++) cin >> a[i];
    ll m = *max_element(a, a + n);
    ll f1 = 1, f2 = 1;
    fib.insert(f1); fib.insert(f2);
    while (f2 <= m) {
        ll temp = f2;
        f2 += f1;
        f1 = temp;
        fib.insert(f2);
    }
    int count = 0;
    for (int i = 0; i < n; i++) if (fib.find(a[i]) != fib.end()) count++;
    cout << count;
    return 0;
}