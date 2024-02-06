// #pragma GCC optimize("Ofast")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
// #pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
int main()
{
    fast_cin();
    string n; getline(cin, n);
    int freq[100000] = {0};
    unordered_map <int, int> f;
    for (int i = 0; i < n.length(); i++) {
        if (n[i] == '1') freq[i+1] = freq[i]+1;
        else freq[i+1] = freq[i];
        // cout << freq[i+1] << ' ';
    }
    // cout<<endl;
    int ans = 0;
    for (int i = 1; i <= n.length(); i++) {
        if (freq[i] == 0) continue;
        f[i % freq[i]]++;
        ans+=f[i % freq[i]];
    }
    for (auto i : f) cout << i.second << ' ';
    cout << ans;
    return 0;
}