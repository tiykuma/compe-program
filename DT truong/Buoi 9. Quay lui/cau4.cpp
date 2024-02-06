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

char x[1000000], d[1000000]; int n; string s;

string ghinghiem(char a[])
{
    string z;
    for(int i = 2; i <= n+1; i++) {
        z += x[i-1];
        if (x[i] =='B' && x[i-1] == 'B') return ""; 
    }
    return z + "\n";
}

void bt(int i) {
    for (char j = 'A'; j <= 'B'; j++) {
        x[i] = j;
        if (i == n) cout << ghinghiem(x);
        else bt(i+1);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    x[0] = 0; d[0] = 0;
    bt(1);
    return 0;
}