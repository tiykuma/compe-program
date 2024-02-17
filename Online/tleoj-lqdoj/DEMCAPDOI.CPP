#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define ln "\n"
#define debug(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second

ll a[1000000], n, x, c;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> x;
    unordered_map<int, int> s;
    for (ll i = 0; i < n; ++i) {
        ll h; cin >> h; s[h]++;
    }
    for (auto i : s) {
        if (s.find(x - i.first) != s.end()) { // Check if the complement exists
            if (x - i.first == i.first) c += (i.second * (i.second - 1)) / 2;
            else c += i.second * s[x - i.first];
        }
    }
    cout << c;
    return 0;
}
