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

ll n, a[1000000], vn, ma, vnc, mac, c;

int main() {
    freopen("VCKU23.INP", "r", stdin);
    freopen("VCKU23.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n; 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > 0) {
            vn += a[i];
            vnc++;
        }
        else if (a[i] < 0) {
            ma += a[i];
            mac++;
        }
    }
    if (abs(ma / mac) > vn / vnc) {
        cout << "Fan U23 Malaysia cuong nhiet hon.";
        return 0;
    }
    else if (abs(ma / mac) < vn / vnc) {
        // cout << ma << mac << vn << vnc;
        cout << "Fan U23 Viet Nam cuong nhiet hon.";
        return 0;
    }
    else {
        for (int i = 0; i < n; i++) {
            if (a[i] < 0) {
                int j = i + 1;
                while (j < n && a[j] < 0) j++;
                if (j < n) {
                    swap(a[i], a[j]);
                    c++;
                }
            }
        }
        cout << "Do cuong la nhu nhau\nCo " << c << " nguoi phai doi cho cho nhau (" << c / 2 << " lan doi cho).";
    }
    
    return 0;
}