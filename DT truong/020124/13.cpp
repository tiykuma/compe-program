#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m; cin >> n >> m;
    int a[n]; for (int i = 0; i < n; i++) cin >> a[i]; 
    int b[m]; for (int i = 0; i < m; i++) cin >> b[i]; 
    vector <int> c;
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (a[i] <= b[j]) {
            c.push_back(a[i]);
            i++;
        }
        else {
            c.push_back(b[j]);
            j++;
        }
    }
    while (i < n) {c.push_back(a[i]); i++;}
    while (j < m) {c.push_back(b[j]); j++;}
    for (auto i : c) cout << i << ' ';
}