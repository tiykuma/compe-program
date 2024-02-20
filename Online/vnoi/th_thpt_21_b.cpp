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

string s1, s2; ll res;

int main()
{
    // freopen("BAI2.INP", "r", stdin);
    // freopen("BAI2.OUT", "w", stdout);
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    getline(cin, s1);
    getline(cin, s2);
    for (int i = s2.length()-1; i >= 0; i--) {
        if (s2[i] == ' ') s2.erase(i);
        else break;
    }
    s1 += " "; s2 += " ";
    int i = 0, j = 0;
    while (j <= s2.length()) {
        if (s1[i] == s2[j]) {} 
        else {
            while (s1[i] == s1[i-1]) i++;
            if (s1[i-1]!=s1[i-2]) {
                res--;
            }
            while (s1[i] != ' ') i++;
            while (s2[j] != ' ') j++;
        }
        if (s2[j] == ' ') res++;
        i++; j++;
    }
    cout << res;
    return 0;
}