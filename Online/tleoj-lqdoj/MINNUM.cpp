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

string s;

int main()
{
    freopen("MINNUM.inp", "r", stdin);
    freopen("MINNUM.out", "w", stdout);
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> s;
    int countx = 0, county=0, res = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '>') {countx++;county=0;}
        else if (s[i] = '<') {county++; countx=0;}
        res = max(res, max(countx, county));
    }
    cout << res;
    return 0;
}