#include <bits/stdc++.h>

using namespace std;

int main() {
    int m, n; cin >> m >> n;
    unordered_map<int, int> a; for (int i = 0; i < m; i++) {int x; cin >> x; a[x]++;}
    unordered_map<int, int> b; for (int i = 0; i < n; i++) {int x; cin >> x; b[x]++;}
    for (auto i : a) if (b[i.first] != i.second) {
        cout << "Khong";
        return 0;
    }
    cout << "Co";
}