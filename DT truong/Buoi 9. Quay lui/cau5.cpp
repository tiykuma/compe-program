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

int a[1000000], sum = 0, d[1000000], x[1000000], n, k; 
string s;

void ghinghiem(int x[], int i)
{
    for (int j = 0; j < i; j++) cout << x[j] << " ";
    cout << endl;
}

void bt (int i, int s) {
    for (int j = 0; j < n; j++) {
        if (d[j] == 0) {
            if (s + a[j] == sum) {
                d[j] = 1;
                x[i] = a[j];
                ghinghiem(x, i);
                x[i] = 0;
                continue;
            }
            d[j] = 1;
            x[i] = a[j];
            bt(i+1, s + a[j]);
            d[j] = 0;
            x[i] = 0;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> k;
    int a[n]; for (int i = 0; i < n; i++) {cin >> a[i]; sum = sum + a[i];}
    sum /= k;
    x[0] = 0;
    bt(1, 0);
    return 0;
}