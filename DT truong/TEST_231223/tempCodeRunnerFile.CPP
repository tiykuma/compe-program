#include <bits/stdc++.h>

using namespace std;

// int comp(int a, int b) {
//     return a > b;
// }

int comp_rev(int a, int b) {
    return a > b;
}

int main() {
    int m, n; cin >> m >> n;
    unordered_map <int, int> doan; for (int i = 0; i < m; i++) {int x; cin >> x; doan[x] = i;}
    vector <int> s; for (auto i:doan) s.push_back(i.first);
    sort(s.begin(), s.end(), comp_rev);
    unordered_map <int, int> xe; for (int i = 0; i < n; i++) {int x; cin >> x; xe[x] = i;} 
    vector <int> h; for (auto i:xe) h.push_back(i.first);
    sort(h.begin(), h.end());
    for (int i = 0; i < s.size(); i++) {
        cout << "Xe so " << i + 1 << " phuc vu doan khach so " << s[h[i]] << endl;

    }
}   