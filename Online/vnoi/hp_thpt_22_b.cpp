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
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

ll n;

bool comp (string a, string b) {
    string s1 = a + b;
    string s2 = b + a;
    return s1 > s2;
}

int main()
{
    fast_cin(); cin >> n;
    vector <string> a, gg; string s[100000];
    for (ll i = 0; i < n; i++) {
        string x; cin >> x; a.push_back(x);
    }
    sort(a.rbegin(), a.rend());
    for (auto i : a) {
        s[i.length()] += i;
    }
    for (ll i = 0; i < 10000; i++) if (s[i] != "") gg.pb(s[i]);
    sort(gg.begin(), gg.end(), comp);
    for (auto i : gg) cout << i;
    return 0;
}