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



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n, P = 3, count, digits = 1, reference = 0;
    cin >> n;
    while (reference < n) {
        P++;
        if (P >= pow(10, digits)) digits++;
        reference += digits;
        cout <<reference << ' ';
    }
    cout << P;
    return 0;
}