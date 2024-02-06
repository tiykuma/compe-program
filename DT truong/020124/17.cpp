/*
Ky hieu:
  1: Bi xanh
  2: Bi do
  3: Bi vang
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x = 0, d = 0, v = 0; cin >> n;
    int a[n]; vector <int> b; for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 1) x++;
        if (a[i] == 2) d++;
        if (a[i] == 3) v++;
    }
    for (int i = 0; i < x; i++) b.push_back(1);
    for (int i = 0; i < d; i++) b.push_back(2);
    for (int i = 0; i < v; i++) b.push_back(3);
    for (auto i : b) cout << i << ' ';
}