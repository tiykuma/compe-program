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

ll n;
int sieve[1000000];

map<ll, ll> s;


ll process(ll n) {
    for (ll i = 1; i <= sqrt(n); i++) {
        if (n % (n / i) == 0) {
            bool c = true;
            for (ll j = 2; j <= sqrt((n / i)); j++) {
                if ((n / i) % (j * j) == 0) {c = false; break;}
            }
            if (c == true) return (n / i);
        }
    }
    for (ll i = sqrt(n); i >= 1; i--) {
        if (n % i == 0) {
            bool c = true;
            for (ll j = 2; j <= sqrt(i); j++) {
                if (i % (j * j) == 0) {c = false; break;}
            }
            if (c == true) return i;
        }
    }

    return 0;
}

int main()
{
    // clock_t begin = clock();
    freopen("SQFREE.INP", "r", stdin);
    freopen("SQFREE.OUT", "w", stdout);
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    while(cin >> n) {
        cout << process(n) << endl;
    }
    // clock_t end = clock(); //ghi lại thời gian lúc sau
    // cout<<"Time run: "<<(float)(end-begin)/CLOCKS_PER_SEC<<" s"<<endl;
    return 0;
}