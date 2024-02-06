#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, k, a[1000000], ss[1000001], sss[1000001];
int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        ss[i+1]=(ss[i]+a[i]);
    }
    unordered_map<int, vector <int>> m;
    int bd = 99999999, kt = 0, Max = -99999;
    for (int i = 1; i <= n; i++) {
        sss[i] = ss[i] -(k*i);
        m[sss[i]].push_back(i);
    } 
    for (auto i : m) {
        if (i.second.size() >= 2) {
            for (auto j : i.second) {
                bd = min(j, bd);
                kt = max(j, kt);
            }
            Max = i.first;
        }
    }
    cout << bd + 1 << ' ' << kt;
}