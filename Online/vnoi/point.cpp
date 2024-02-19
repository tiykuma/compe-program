// #pragma GCC optimize("Ofast")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
// #pragma GCC optimize("unroll-loops")
// #include <bits/stdc++.h>

// using namespace std;

// typedef long long ll;
// #define ln "\n"
// #define debug(x) cout<<#x<<" = "<<x<<ln
// #define mp make_pair
// #define pb push_back
// #define fi first
// #define se second

// ll t;

// int main()
// {
//     ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//     cin >> t;
//     while (t != 0) {
//         ll n; cin >> n;
//         ll sumx = 0, sumy = 0;
//         for (int i = 0; i < n; i++) {
//             ll x, y; cin >> x >> y;
//             sumx += x; sumy += y;
//         }
//         cout << abs(sumx + sumy) << " " << n << endl;
//         --t;
//     }
//     return 0;
// }