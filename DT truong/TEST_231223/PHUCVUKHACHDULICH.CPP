#include <bits/stdc++.h>

using namespace std;

int comp_rev(pair<int, int> a, pair<int, int> b) {
    return a.first > b.first;
}

int main() {
    int m, n; cin >> m >> n;
    vector <pair<int, int>> doan; for (int i = 0; i < m; i++) {int x; cin >> x; doan.push_back({x, i});}
    vector <pair<int, int>> xe; for (int i = 0; i < n; i++) {int x; cin >> x; xe.push_back({x, i});}
    sort(doan.begin(), doan.end(), comp_rev);
    sort(xe.begin(), xe.end());
    for (int i = 0; i < doan.size(); i++) {
        cout << "Xe so " << i + 1 << " phuc vu doan khach so " << doan[xe[i].second].second + 1 << endl;

    }
}   