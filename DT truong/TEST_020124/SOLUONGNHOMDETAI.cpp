#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, count = 0; cin >> n;
    unordered_map <int, int> c;
    int a[n]; for (int i = 0; i < n; i++) {cin >> a[i]; c[a[i]]++;}
    for (auto i : c) count += (i.second / i.first);
    cout << count;
}