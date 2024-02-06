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

string n; ll pf[1000000], res;

int main()
{
    unordered_map<int, int> s;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (int i = 0; i < n.length(); i++) {
        pf[i+1] = (pf[i] + (n[i] - '0')) % 3;
        cout << pf[i+1] << ' ';
    }
    for (int i = n.length()+1; i > 0; i--) {
        s[pf[i]]++;
    }
    for (auto i : s) {
        if (i.second != 0) res += (i.se * (i.se - 1)) / 2;
        else res += i.se;
    }
    cout << res;
    return 0;
}