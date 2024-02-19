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

ll n, q, c;
string s;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    cin >> s;
    for (int i = 0; i < n; ++i) if (s[i] == '1') ++c;
    cin >> q;
    while (q != 0) {
        ll x; cin >> x;
        if (x == 0 && c == n) cout << "Luong Xiao Lin\n";
        else if (x <= c) cout << "Ami Dep Trai\n";
        else cout << "Luong Xiao Lin\n";
        q--;
    }
    return 0;
}