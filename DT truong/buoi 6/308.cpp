#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    int a[n]; for (int i = 0; i < n; i++) cin >> a[i];
    vector <int> b; for (int i = 0; i < n; i++) if (a[i] < 0) b.push_back(a[i]);
    for (int i: b) cout << i <<  " ";
}