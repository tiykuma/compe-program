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

string s; ll c;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> s;
    for (int i = 0; i < s.length(); i++) if (s[i] == '2') ++c;
    cout << s << endl << c << endl;
    if (s[0] == s[s.length() - 1]) cout << "YES\n";
    else cout << "NO\n";
    for (int i = s.length()-1; i >= 0; --i) cout << s[i];
    return 0;
}