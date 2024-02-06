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

int x[1000000], d[1000000], n; string s;

void ghinghiem(int a[])
{
    for(int i = 1; i <= n; i++)
        cout << s[a[i]];
    cout<<endl;
}

void bt(int i) {
    for (int j = 0; j < n; j++) {
        if (d[j] == 0) {
            x[i] = j;
            d[j] = 1;
            if (i == n) ghinghiem(x);
            else bt(i+1);
            d[j]=0;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> s;
    n = s.length();
    x[0] = 0; d[0] = 0;
    bt(1);
    return 0;
}