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

ll a[1000000], n, t, fi;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n; 
    unordered_map<int, int> c;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (c[a[i]] == 0) c[a[i]] = i+1;
    }
    cin >> t; ll temp = t;
    while (temp != 0) {
        int x; cin >> x;
        if (c[x] == 0) {cout << -1 << endl; fi++;}
        else cout << c[x] << endl;
        temp--;
    }
    if (fi * 2 == t) cout << 0; 
    else if (t - fi > fi) cout << 1; 
    else cout << -1;
    return 0;
}