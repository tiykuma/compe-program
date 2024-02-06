#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll n;

int main() {
    ios_base::sync_with_stdio(false);
    vector <pair<ll, ll>> a;
    ll s = 0, MAX = 0;
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++) {
        ll x, y; cin >> x >> y;
        a.push_back(make_pair(x,y));
    }
    int d = 1;
    sort(a.begin(), a.end());
    for (int i = 1; i < n; i++) {
        if (a[i].first <= a[i-1].second) {
            s = abs(a[i].second - a[d].first);
        }
        else {s = 0;d=i;}
        MAX = max(MAX, s);
    }
    // for (auto i : a) cout << i.first << ' ' << i.second << endl;
    cout << MAX;
}