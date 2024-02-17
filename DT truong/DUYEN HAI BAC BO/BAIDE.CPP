#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <iostream>

using namespace std;

typedef long long ll;
#define ln "\n"
#define debug(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second

ll n, a, s, sieve[1000000], smax, m = 1000000;

void snt(int n) {
    sieve[1] = sieve[0] = 1;
    for (int p = 2; p * p <= n; p++) {
        if (sieve[p] == 0) {
            for (int i = p * p; i <= n; i += p)
                sieve[i] = 1;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    snt(n+1);
    for (int i = 0; i < n; i++) {
        cin >> a;
        s += a;
        if (sieve[i + 1] == 0) smax = max(smax, s - m);
        if (sieve[i + 2] == 0) m = min(m, s);
        // debug(smax); debug(m);
    }
    cout << smax;
    return 0;
}