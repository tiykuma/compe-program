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

ll snt[100000], q, l, r, val, prefix_sum[100001];
vector<int> primes;
void sang(int n) {
    snt[1] = snt[0] = 1;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (snt[i] == 0) {
            for (int j = i * i; j <= n; j += i) snt[j] = 1;
        }
    }
    for (int p = 2; p <= n; ++p) {
        if (snt[p] == 0) {
            primes.push_back(p);
        }
    }
}


int main()
{
    freopen("PRIME.INP", "r", stdin);
    freopen("PRIME.OUT", "w", stdout);
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    sang(100000);
    cin >> q;
    for (int i = 0; i < q; ++i) {
        cin >> l >> r >> val;
        ll sum = 0;
        for (auto j : primes) {
            if (j >= l) {
                if (j <= r) {sum += abs(val - j); }
                else break;
            }
        }
        cout << sum << endl;
    }
    return 0;
}