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

int n;

void print(string s) {
    cout << s << endl;
}

void bp(int l, int r, string s) {
    if (s.length() == n*2) {
        print(s);
    }
    if (l < n) {
        bp(l+1, r, s + "(");
    }
    if (r < l) {
        bp(l, r+1, s + ")");
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    bp(0, 0, "");
    return 0;
}